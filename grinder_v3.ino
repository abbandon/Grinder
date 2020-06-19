
#include <avr/eeprom.h>
#include <avr/power.h>
#include <avr/sleep.h>

#include <Tiny4kOLED.h>
#include "font16x32digitsext.h"


#define ULONG_MAX (-1UL)

#define MARK 0xB005
#define TIME_MAX 0xFFFFUL // max time worker ms
#define TIME_MIN 1000UL   // min time worker ms
#define TIME_SETTINGS_STEP 100  
//#define MAX_IDLE_TIME 300000UL


#define EEPROM_MARK_ADDRESS 0
#define EEPROM_TIME_ADDRESS 2

#define IN_PUSH_BUTTON 4
#define OUT_ACTION_TRIGGER 1

const char BLANC_CHAR='\x2B';//'\x2F';
const char SEC_CHAR='\x2F';// s
const char POINT_CHAR='\x2E';//'\x3B'; // .
const char ERROR_CHAR='\x2F';//'\x3C'; // #
const char SETUP_CHAR='\x2F';//'\x3D'; // @
const char READY_CHAR='\x2F';//'\x3E'; // >

//const char TRI_POINTS_CHAR[] PROGMEM  = {POINT_CHAR,POINT_CHAR,POINT_CHAR,0};
//const char ERR_CHAR[] PROGMEM  = {SHARP_CHAR,SHARP_CHAR,SHARP_CHAR,0};

uint16_t mark;
void(*_loopRun)();
uint16_t _worker_time;
unsigned long _stopAt;
unsigned char _sec;
unsigned char _msec;
unsigned long _sleepAt;

void setup() {
 
  clock_prescale_set(clock_div_1);
  OSCCAL += 110; 
  
  pinMode(IN_PUSH_BUTTON, INPUT);
  pinMode(OUT_ACTION_TRIGGER, OUTPUT);
  digitalWrite(OUT_ACTION_TRIGGER, LOW);
  
  oled.begin(128,64,0,0);
  oled.setFont(FONT16X32DIGITS_EXT);
  
  oled.enableChargePump();
  oled.setRotation(1);
  oled.enableZoomIn();

  oled.clear();

  oled.setCursor(0, 0);
  #ifndef NO_DOUBLE_BUFFERING
  oled.switchRenderFrame();
  oled.clear();
  oled.setCursor(0, 0);
  oled.switchFrame();
  #endif
  oled.on();
  InitSettings();

}

void loop() {
  (*_loopRun)();
}

void InitSettings()
{
  
  mark = (unsigned int)eeprom_read_word((const uint16_t*)EEPROM_MARK_ADDRESS);
  if (mark != MARK){
      SetEEPROM_defaults();
  } 
  _worker_time = eeprom_read_word((const uint16_t*)EEPROM_TIME_ADDRESS);
  _loopRun = &_loop_readyStep;
  if ( mark ^ MARK ) _loopRun = &_loop_ErrorStep;
  if ( _worker_time >  TIME_MAX ) _loopRun = &_loop_ErrorStep;
  if ( _worker_time <  TIME_MIN ) _loopRun = &_loop_ErrorStep;
  _sec = (unsigned char) (_worker_time/1000);
  _msec = (unsigned char) ((_worker_time - _sec*1000)/100);
#ifdef MAX_IDLE_TIME  
  _sleepAt=millis()+MAX_IDLE_TIME;
#endif  
}


void _loop_readyStep(){
  delay(50);
#ifdef  MAX_IDLE_TIME
  if (_sleepAt <= millis()){
        set_sleep_mode(SLEEP_MODE_IDLE);  // select "lightly napping "
        sleep_mode();  // go to sleep
        clock_prescale_set(clock_div_256);
        oled.off();
        _loopRun = &_loop_Sleep;
        return;
  }
#endif  
  printTime(READY_CHAR); 
  if (digitalRead(IN_PUSH_BUTTON) == LOW) return; 
  
  _sleepAt = ULONG_MAX;
  unsigned long _pressed = millis();
  do {
    if ( (millis() - _pressed) > 5000 ) printTime(SETUP_CHAR);
  }  while(digitalRead(IN_PUSH_BUTTON) == HIGH ); 

   // go settings
   if ((millis() - _pressed) > 5000){
        _loopRun = &_loop_Settings;
        return;
    }

  // proceed  
  _stopAt = millis() + _worker_time;
  _loopRun = &_loop_Worker;
}

void _loop_Sleep(){
  delay(10);
  if (digitalRead(IN_PUSH_BUTTON) == LOW) return; 
  clock_prescale_set(clock_div_1);
  oled.on();
  do {
  }  while(digitalRead(IN_PUSH_BUTTON) == HIGH ); 

  InitSettings();
}

void _loop_Settings(){
    if (digitalRead(IN_PUSH_BUTTON) == LOW) return; 
    unsigned long _pressed = millis();
    unsigned long _t;
    while(digitalRead(IN_PUSH_BUTTON) == HIGH){
      if ((millis() - _pressed) < 5000) continue;
      if ((millis() - _pressed) < 10000) printTime(SEC_CHAR);
      else printTime(ERROR_CHAR);
    }
    
    if ((millis() - _pressed) > 5000){
      if ((millis() - _pressed) < 10000){
        eeprom_write_word(( uint16_t*)EEPROM_MARK_ADDRESS,MARK);
        eeprom_write_word(( uint16_t*)EEPROM_TIME_ADDRESS,_worker_time);
        eeprom_busy_wait();         
      }
      InitSettings();
      return;
    }

    _worker_time += TIME_SETTINGS_STEP;
    if (_worker_time >= TIME_MAX)  _worker_time = TIME_MIN;
    //if (_worker_time <= TIME_MIN)  _worker_time = TIME_MAX; // step forward only
    _sec = (unsigned char) (_worker_time/1000);
    _msec = (unsigned char) ((_worker_time - _sec*1000)/100);
    printTime(SETUP_CHAR);
}

void _loop_Worker(){

  digitalWrite(OUT_ACTION_TRIGGER, HIGH);
  printTime(BLANC_CHAR);
  if (digitalRead(IN_PUSH_BUTTON) == HIGH) {
    digitalWrite(OUT_ACTION_TRIGGER, LOW);
    delay(100);
    InitSettings();
    return;
  }

  unsigned int d = _stopAt - millis();
  _sec = (unsigned char) (d/1000);
  _msec = (unsigned char)((d - _sec*1000)/100);
  
  if (millis() < _stopAt) return;

  digitalWrite(OUT_ACTION_TRIGGER, LOW);
  InitSettings();
 
}

void printTime(char _status){
  //oled.clear();
  oled.setCursor(0, 0);
  oled.print(_status);
  oled.print((int)_sec);
  oled.print(POINT_CHAR); // "."
  oled.print((int)_msec);
  oled.print(SEC_CHAR);// "s" 
  oled.switchFrame();
  }

void _loop_ErrorStep(){
  delay(50);
  oled.setCursor(0, 0);
  oled.print(ERROR_CHAR);
  oled.switchFrame();   

  if (digitalRead(IN_PUSH_BUTTON) == HIGH) 
      {
        oled.setCursor(0, 0);
        oled.print(SETUP_CHAR);
        oled.switchFrame();   
        SetEEPROM_defaults();
        InitSettings();
        }
    
} 

void SetEEPROM_defaults()
{
      eeprom_write_word(( uint16_t*)EEPROM_MARK_ADDRESS,MARK);
      eeprom_write_word(( uint16_t*)EEPROM_TIME_ADDRESS,30000);
      eeprom_busy_wait();  
  }