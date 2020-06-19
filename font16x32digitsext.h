/*
 * TinyOLED-Fonts - Fonts for Tiny4kOLED
 * https://github.com/datacute/TinyOLED-Fonts
 * https://github.com/datacute/Tiny4kOLED
 */
/*
 * SSD1306xLED - Drivers for SSD1306 controlled dot matrix OLED/PLED 128x64 displays
 *
 * @created: 2014-08-12
 * @author: Neven Boyanov
 *
 * Source code available at: https://bitbucket.org/tinusaur/ssd1306xled
 *
 */

// ----------------------------------------------------------------------------

#include <avr/pgmspace.h>

// ----------------------------------------------------------------------------

/* Standard ASCII 16x32 font */
const uint8_t ssd1306xled_font16x32_digits_ext [] PROGMEM = {
  
	// @0 ',' (16 pixels wide)
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //  #       
	0x00, // ###   ###
	0x00, //  ########
	0x00, //   #######
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          

	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //  #       
	0x00, // ###   ###
	0x00, //  ########
	0x00, //   #######
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          

	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //  #       
	0x80, // ###   ###
	0x80, //  ########
	0x80, //   #######
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          

	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x40, //  #       
	0xE3, // ###   ###
	0x7F, //  ########
	0x3F, //   #######
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          
	0x00, //          

	// @32 '-' (16 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, //                 ###
	0xE0, //                 ###
	0xE0, //                 ###
	0xE0, //                 ###
	0xE0, //                 ###
	0xE0, //                 ###
	0xE0, //                 ###
	0xE0, //                 ###
	0xE0, //                 ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //                 ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @48 '.' (16 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, // ###
	0x00, // ###
	0x00, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, // ###
	0x00, // ###
	0x00, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, // ###
	0x00, // ###
	0x00, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, // ###
	0xE0, // ###
	0xE0, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @64 '/' (16 pixels wide)
	0x00, //                              
	0x00, //                              
	0x00, // #                            
	0x00, // #####                        
	0x00, // #########                    
	0x00, //  ############                
	0x00, //      ############            
	0x00, //          ############        
	0x80, //              ############    
	0xF8, //                  ############
	0xF8, //                      ########
	0x78, //                          ####
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	0x00, //                              
	0x00, //                              
	0x00, // #                            
	0x00, // #####                        
	0x00, // #########                    
	0x00, //  ############                
	0x80, //      ############            
	0xF8, //          ############        
	0xFF, //              ############    
	0x7F, //                  ############
	0x07, //                      ########
	0x00, //                          ####
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	0x00, //                              
	0x00, //                              
	0x00, // #                            
	0x00, // #####                        
	0x80, // #########                    
	0xF8, //  ############                
	0xFF, //      ############            
	0x7F, //          ############        
	0x07, //              ############    
	0x00, //                  ############
	0x00, //                      ########
	0x00, //                          ####
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	0x00, //                              
	0x00, //                              
	0x80, // #                            
	0xF8, // #####                        
	0xFF, // #########                    
	0x7F, //  ############                
	0x07, //      ############            
	0x00, //          ############        
	0x00, //              ############    
	0x00, //                  ############
	0x00, //                      ########
	0x00, //                          ####
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	// @128 '0' (16 pixels wide)
	0x00, //         #############        
	0x00, //     ####################     
	0xC0, //    #######################   
	0xE0, //   ######             ######  
	0xF0, //  ####                   #### 
	0x78, // ####                     ####
	0x38, // ###                       ###
	0x38, // ###                       ###
	0x38, // ###                       ###
	0x78, // ####                     ####
	0xF0, //  ####                   #### 
	0xE0, //   ######             ######  
	0xC0, //    #######################   
	0x00, //      ###################     
	0x00, //         #############        
	0x00, //                              

	0xF8, //         #############        
	0xFF, //     ####################     
	0xFF, //    #######################   
	0x07, //   ######             ######  
	0x00, //  ####                   #### 
	0x00, // ####                     ####
	0x00, // ###                       ###
	0x00, // ###                       ###
	0x00, // ###                       ###
	0x00, // ####                     ####
	0x00, //  ####                   #### 
	0x07, //   ######             ######  
	0xFF, //    #######################   
	0xFF, //      ###################     
	0xF8, //         #############        
	0x00, //                              

	0xFF, //         #############        
	0xFF, //     ####################     
	0xFF, //    #######################   
	0x00, //   ######             ######  
	0x00, //  ####                   #### 
	0x00, // ####                     ####
	0x00, // ###                       ###
	0x00, // ###                       ###
	0x00, // ###                       ###
	0x00, // ####                     ####
	0x00, //  ####                   #### 
	0x00, //   ######             ######  
	0xFF, //    #######################   
	0xFF, //      ###################     
	0xFF, //         #############        
	0x00, //                              

	0x00, //         #############        
	0x0F, //     ####################     
	0x1F, //    #######################   
	0x3F, //   ######             ######  
	0x78, //  ####                   #### 
	0xF0, // ####                     ####
	0xE0, // ###                       ###
	0xE0, // ###                       ###
	0xE0, // ###                       ###
	0xF0, // ####                     ####
	0x78, //  ####                   #### 
	0x3F, //   ######             ######  
	0x1F, //    #######################   
	0x07, //      ###################     
	0x00, //         #############        
	0x00, //                              

	// @192 '1' (16 pixels wide)
	0x00, //                              
	0x00, //                              
	0x00, //                   ###        
	0x00, //                    ###       
	0x00, //                     ###      
	0x00, //                     ####     
	0x80, //                      ####    
	0xC0, //                       ####   
	0xF0, // ############################ 
	0xF8, // #############################
	0xF8, // #############################
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	0x00, //                              
	0x00, //                              
	0x38, //                   ###        
	0x1C, //                    ###       
	0x0E, //                     ###      
	0x0F, //                     ####     
	0x07, //                      ####    
	0x03, //                       ####   
	0xFF, // ############################ 
	0xFF, // #############################
	0xFF, // #############################
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	0x00, //                              
	0x00, //                              
	0x00, //                   ###        
	0x00, //                    ###       
	0x00, //                     ###      
	0x00, //                     ####     
	0x00, //                      ####    
	0x00, //                       ####   
	0xFF, // ############################ 
	0xFF, // #############################
	0xFF, // #############################
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	0x00, //                              
	0x00, //                              
	0x00, //                   ###        
	0x00, //                    ###       
	0x00, //                     ###      
	0x00, //                     ####     
	0x00, //                      ####    
	0x00, //                       ####   
	0xFF, // ############################ 
	0xFF, // #############################
	0xFF, // #############################
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              
	0x00, //                              

	// @256 '2' (16 pixels wide)
	0x00, // ###                 ###      
	0xC0, // #####               ######   
	0xE0, // #######             #######  
	0xF0, // ########               ##### 
	0x70, // ### #####                ### 
	0x78, // ###  #####               ####
	0x38, // ###    ####               ###
	0x38, // ###     ####              ###
	0x38, // ###      ####             ###
	0x38, // ###       #####           ###
	0x78, // ###        #####         ####
	0xF0, // ###         ######     ##### 
	0xE0, // ###           #############  
	0xC0, // ###            ###########   
	0x00, // ###               ######     
	0x00, //                              

	0x0E, // ###                 ###      
	0x0F, // #####               ######   
	0x0F, // #######             #######  
	0x01, // ########               ##### 
	0x00, // ### #####                ### 
	0x00, // ###  #####               ####
	0x00, // ###    ####               ###
	0x00, // ###     ####              ###
	0x00, // ###      ####             ###
	0x00, // ###       #####           ###
	0x00, // ###        #####         ####
	0xC1, // ###         ######     ##### 
	0xFF, // ###           #############  
	0xFF, // ###            ###########   
	0x3F, // ###               ######     
	0x00, //                              

	0x00, // ###                 ###      
	0x00, // #####               ######   
	0x00, // #######             #######  
	0x00, // ########               ##### 
	0x80, // ### #####                ### 
	0xC0, // ###  #####               ####
	0xE0, // ###    ####               ###
	0xF0, // ###     ####              ###
	0x78, // ###      ####             ###
	0x3E, // ###       #####           ###
	0x1F, // ###        #####         ####
	0x0F, // ###         ######     ##### 
	0x03, // ###           #############  
	0x01, // ###            ###########   
	0x00, // ###               ######     
	0x00, //                              

	0xE0, // ###                 ###      
	0xF8, // #####               ######   
	0xFE, // #######             #######  
	0xFF, // ########               ##### 
	0xEF, // ### #####                ### 
	0xE7, // ###  #####               ####
	0xE1, // ###    ####               ###
	0xE0, // ###     ####              ###
	0xE0, // ###      ####             ###
	0xE0, // ###       #####           ###
	0xE0, // ###        #####         ####
	0xE0, // ###         ######     ##### 
	0xE0, // ###           #############  
	0xE0, // ###            ###########   
	0xE0, // ###               ######     
	0x00, //                              

	// @320 '3' (16 pixels wide)
	0x00, //      ###              ##     
	0xC0, //    #####              ####   
	0xE0, //   ######              #####  
	0xF0, //  #####                  #### 
	0x78, //  ###                     ####
	0x38, // ###                       ###
	0x38, // ###           ###         ###
	0x38, // ###           ###         ###
	0x38, // ###           ###         ###
	0x78, // ####          ####       ####
	0xF0, //  ###         ######     #### 
	0xE0, //  #####     ################  
	0xC0, //   #############  #########   
	0x80, //    ###########     ######    
	0x00, //       ######                 
	0x00, //                              

	0x03, //      ###              ##     
	0x03, //    #####              ####   
	0x03, //   ######              #####  
	0x00, //  #####                  #### 
	0x00, //  ###                     ####
	0x00, // ###                       ###
	0x80, // ###           ###         ###
	0x80, // ###           ###         ###
	0x80, // ###           ###         ###
	0xC0, // ####          ####       ####
	0xE0, //  ###         ######     #### 
	0xFF, //  #####     ################  
	0x7F, //   #############  #########   
	0x1F, //    ###########     ######    
	0x00, //       ######                 
	0x00, //                              

	0x00, //      ###              ##     
	0x00, //    #####              ####   
	0x00, //   ######              #####  
	0x00, //  #####                  #### 
	0x00, //  ###                     ####
	0x00, // ###                       ###
	0x03, // ###           ###         ###
	0x03, // ###           ###         ###
	0x03, // ###           ###         ###
	0x03, // ####          ####       ####
	0x07, //  ###         ######     #### 
	0x1F, //  #####     ################  
	0xFE, //   #############  #########   
	0xFC, //    ###########     ######    
	0xF0, //       ######                 
	0x00, //                              

	0x07, //      ###              ##     
	0x1F, //    #####              ####   
	0x3F, //   ######              #####  
	0x7C, //  #####                  #### 
	0x70, //  ###                     ####
	0xE0, // ###                       ###
	0xE0, // ###           ###         ###
	0xE0, // ###           ###         ###
	0xE0, // ###           ###         ###
	0xF0, // ####          ####       ####
	0x70, //  ###         ######     #### 
	0x7C, //  #####     ################  
	0x3F, //   #############  #########   
	0x1F, //    ###########     ######    
	0x03, //       ######                 
	0x00, //                              

	// @384 '4' (16 pixels wide)
	0x00, //        ####                  
	0x00, //        ######                
	0x00, //        ########              
	0x00, //        ### ######            
	0x00, //        ###   ######          
	0x00, //        ###     #####         
	0x00, //        ###       #####       
	0x00, //        ###        ######     
	0xC0, //        ###          ######   
	0xF0, //        ###            ###### 
	0xF8, // #############################
	0xF8, // #############################
	0xF8, // #############################
	0x00, //        ###                   
	0x00, //        ###                   
	0x00, //        ###                   

	0x00, //        ####                  
	0x00, //        ######                
	0x00, //        ########              
	0x80, //        ### ######            
	0xE0, //        ###   ######          
	0xF0, //        ###     #####         
	0x7C, //        ###       #####       
	0x3F, //        ###        ######     
	0x0F, //        ###          ######   
	0x03, //        ###            ###### 
	0xFF, // #############################
	0xFF, // #############################
	0xFF, // #############################
	0x00, //        ###                   
	0x00, //        ###                   
	0x00, //        ###                   

	0xE0, //        ####                  
	0xF8, //        ######                
	0xFE, //        ########              
	0xDF, //        ### ######            
	0xC7, //        ###   ######          
	0xC1, //        ###     #####         
	0xC0, //        ###       #####       
	0xC0, //        ###        ######     
	0xC0, //        ###          ######   
	0xC0, //        ###            ###### 
	0xFF, // #############################
	0xFF, // #############################
	0xFF, // #############################
	0xC0, //        ###                   
	0xC0, //        ###                   
	0xC0, //        ###                   

	0x01, //        ####                  
	0x01, //        ######                
	0x01, //        ########              
	0x01, //        ### ######            
	0x01, //        ###   ######          
	0x01, //        ###     #####         
	0x01, //        ###       #####       
	0x01, //        ###        ######     
	0x01, //        ###          ######   
	0x01, //        ###            ###### 
	0xFF, // #############################
	0xFF, // #############################
	0xFF, // #############################
	0x01, //        ###                   
	0x01, //        ###                   
	0x01, //        ###                   

	// @448 '5' (16 pixels wide)
	0x00, //      ###      ####           
	0x80, //    #####      ###########    
	0xF8, //   ######      ###############
	0xF8, //  #####         ##############
	0x78, //  ###            ###      ####
	0x38, // ###              ###      ###
	0x38, // ###              ###      ###
	0x38, // ###              ###      ###
	0x38, // ###              ###      ###
	0x38, // ####            ####      ###
	0x38, //  ####          ####       ###
	0x38, //  ######       #####       ###
	0x38, //    ###############        ###
	0x38, //     #############         ###
	0x00, //        #######               
	0x00, //                              

	0xC0, //      ###      ####           
	0xFF, //    #####      ###########    
	0xFF, //   ######      ###############
	0xFF, //  #####         ##############
	0xE0, //  ###            ###      ####
	0x70, // ###              ###      ###
	0x70, // ###              ###      ###
	0x70, // ###              ###      ###
	0x70, // ###              ###      ###
	0xF0, // ####            ####      ###
	0xE0, //  ####          ####       ###
	0xE0, //  ######       #####       ###
	0xC0, //    ###############        ###
	0x80, //     #############         ###
	0x00, //        #######               
	0x00, //                              

	0x03, //      ###      ####           
	0x03, //    #####      ###########    
	0x03, //   ######      ###############
	0x01, //  #####         ##############
	0x00, //  ###            ###      ####
	0x00, // ###              ###      ###
	0x00, // ###              ###      ###
	0x00, // ###              ###      ###
	0x00, // ###              ###      ###
	0x00, // ####            ####      ###
	0x01, //  ####          ####       ###
	0x03, //  ######       #####       ###
	0xFF, //    ###############        ###
	0xFF, //     #############         ###
	0xFC, //        #######               
	0x00, //                              

	0x07, //      ###      ####           
	0x1F, //    #####      ###########    
	0x3F, //   ######      ###############
	0x7C, //  #####         ##############
	0x70, //  ###            ###      ####
	0xE0, // ###              ###      ###
	0xE0, // ###              ###      ###
	0xE0, // ###              ###      ###
	0xE0, // ###              ###      ###
	0xF0, // ####            ####      ###
	0x78, //  ####          ####       ###
	0x7E, //  ######       #####       ###
	0x1F, //    ###############        ###
	0x0F, //     #############         ###
	0x01, //        #######               
	0x00, //                              

	// @512 '6' (16 pixels wide)
	0x00, //         ############         
	0x00, //     ####################     
	0xC0, //    #######################   
	0xE0, //   #####      ####     #####  
	0xF0, //  ####          ###      #### 
	0x70, // ####           ###       ### 
	0x38, // ###             ###       ###
	0x38, // ###             ###       ###
	0x38, // ###             ###       ###
	0x38, // ####           ####       ###
	0x78, //  ####          ###       ####
	0xF0, //  #####       #####      #### 
	0xE0, //   ###############     #####  
	0xC0, //     ############      ####   
	0x00, //       ########        ##     
	0x00, //                              

	0xF0, //         ############         
	0xFF, //     ####################     
	0xFF, //    #######################   
	0x83, //   #####      ####     #####  
	0xC0, //  ####          ###      #### 
	0xC0, // ####           ###       ### 
	0xE0, // ###             ###       ###
	0xE0, // ###             ###       ###
	0xE0, // ###             ###       ###
	0xE0, // ####           ####       ###
	0xC0, //  ####          ###       ####
	0xC0, //  #####       #####      #### 
	0x83, //   ###############     #####  
	0x03, //     ############      ####   
	0x03, //       ########        ##     
	0x00, //                              

	0xFF, //         ############         
	0xFF, //     ####################     
	0xFF, //    #######################   
	0x07, //   #####      ####     #####  
	0x01, //  ####          ###      #### 
	0x01, // ####           ###       ### 
	0x00, // ###             ###       ###
	0x00, // ###             ###       ###
	0x00, // ###             ###       ###
	0x01, // ####           ####       ###
	0x01, //  ####          ###       ####
	0x07, //  #####       #####      #### 
	0xFF, //   ###############     #####  
	0xFF, //     ############      ####   
	0xFC, //       ########        ##     
	0x00, //                              

	0x00, //         ############         
	0x0F, //     ####################     
	0x1F, //    #######################   
	0x3E, //   #####      ####     #####  
	0x78, //  ####          ###      #### 
	0xF0, // ####           ###       ### 
	0xE0, // ###             ###       ###
	0xE0, // ###             ###       ###
	0xE0, // ###             ###       ###
	0xF0, // ####           ####       ###
	0x78, //  ####          ###       ####
	0x7C, //  #####       #####      #### 
	0x3F, //   ###############     #####  
	0x0F, //     ############      ####   
	0x03, //       ########        ##     
	0x00, //                              

	// @576 '7' (16 pixels wide)
	0x38, //                           ###
	0x38, //                           ###
	0x38, //                           ###
	0x38, // #####                     ###
	0x38, // ##########                ###
	0x38, // #############             ###
	0x38, //      ###########          ###
	0x38, //           ########        ###
	0x38, //              #######      ###
	0x38, //                 ######    ###
	0x38, //                   ######  ###
	0xB8, //                     ##### ###
	0xF8, //                       #######
	0xF8, //                         #####
	0x38, //                           ###
	0x00, //                              

	0x00, //                           ###
	0x00, //                           ###
	0x00, //                           ###
	0x00, // #####                     ###
	0x00, // ##########                ###
	0x00, // #############             ###
	0x00, //      ###########          ###
	0xC0, //           ########        ###
	0xF0, //              #######      ###
	0xFC, //                 ######    ###
	0x3F, //                   ######  ###
	0x0F, //                     ##### ###
	0x03, //                       #######
	0x00, //                         #####
	0x00, //                           ###
	0x00, //                              

	0x00, //                           ###
	0x00, //                           ###
	0x00, //                           ###
	0x00, // #####                     ###
	0xC0, // ##########                ###
	0xF8, // #############             ###
	0xFF, //      ###########          ###
	0x3F, //           ########        ###
	0x07, //              #######      ###
	0x00, //                 ######    ###
	0x00, //                   ######  ###
	0x00, //                     ##### ###
	0x00, //                       #######
	0x00, //                         #####
	0x00, //                           ###
	0x00, //                              

	0x00, //                           ###
	0x00, //                           ###
	0x00, //                           ###
	0xF8, // #####                     ###
	0xFF, // ##########                ###
	0xFF, // #############             ###
	0x07, //      ###########          ###
	0x00, //           ########        ###
	0x00, //              #######      ###
	0x00, //                 ######    ###
	0x00, //                   ######  ###
	0x00, //                     ##### ###
	0x00, //                       #######
	0x00, //                         #####
	0x00, //                           ###
	0x00, //                              

	// @640 '8' (16 pixels wide)
	0x00, //      #######                 
	0x80, //    ###########     ######    
	0xE0, //   #############  ##########  
	0xF0, //  #####     #### ############ 
	0xF0, //  ###         ######     #### 
	0x78, // ####          ####       ####
	0x38, // ###           ###         ###
	0x38, // ###           ###         ###
	0x38, // ###           ###         ###
	0x78, // ###          #####       ####
	0xF0, //  ###         ######     #### 
	0xF0, //  #####     #### ############ 
	0xC0, //   ############   #########   
	0x80, //    ##########      ######    
	0x00, //      #######                 
	0x00, //                              

	0x00, //      #######                 
	0x1F, //    ###########     ######    
	0x7F, //   #############  ##########  
	0xFF, //  #####     #### ############ 
	0xE0, //  ###         ######     #### 
	0xC0, // ####          ####       ####
	0x80, // ###           ###         ###
	0x80, // ###           ###         ###
	0x80, // ###           ###         ###
	0xC0, // ###          #####       ####
	0xE0, //  ###         ######     #### 
	0xFF, //  #####     #### ############ 
	0x7F, //   ############   #########   
	0x1F, //    ##########      ######    
	0x00, //      #######                 
	0x00, //                              

	0xF0, //      #######                 
	0xFC, //    ###########     ######    
	0xFE, //   #############  ##########  
	0x1E, //  #####     #### ############ 
	0x07, //  ###         ######     #### 
	0x03, // ####          ####       ####
	0x03, // ###           ###         ###
	0x03, // ###           ###         ###
	0x03, // ###           ###         ###
	0x07, // ###          #####       ####
	0x07, //  ###         ######     #### 
	0x1E, //  #####     #### ############ 
	0xFC, //   ############   #########   
	0xF8, //    ##########      ######    
	0xF0, //      #######                 
	0x00, //                              

	0x07, //      #######                 
	0x1F, //    ###########     ######    
	0x3F, //   #############  ##########  
	0x7C, //  #####     #### ############ 
	0x70, //  ###         ######     #### 
	0xF0, // ####          ####       ####
	0xE0, // ###           ###         ###
	0xE0, // ###           ###         ###
	0xE0, // ###           ###         ###
	0xE0, // ###          #####       ####
	0x70, //  ###         ######     #### 
	0x7C, //  #####     #### ############ 
	0x3F, //   ############   #########   
	0x1F, //    ##########      ######    
	0x07, //      #######                 
	0x00, //                              

	// @704 '9' (16 pixels wide)
	0x00, //      ##         #######      
	0xC0, //    ####      #############   
	0xE0, //  ######     ###############  
	0xF0, //  ####      #####      ###### 
	0xF0, // ####       ###          #### 
	0x78, // ###       ####           ####
	0x38, // ###       ###             ###
	0x38, // ###       ###             ###
	0x38, // ###       ###             ###
	0x78, //  ###       ###           ####
	0xF0, //  ####      ###          #### 
	0xE0, //   #####     ####       ####  
	0xC0, //    #######################   
	0x80, //      ####################    
	0x00, //          ############        
	0x00, //                              

	0xFE, //      ##         #######      
	0xFF, //    ####      #############   
	0xFF, //  ######     ###############  
	0x03, //  ####      #####      ###### 
	0x00, // ####       ###          #### 
	0x00, // ###       ####           ####
	0x00, // ###       ###             ###
	0x00, // ###       ###             ###
	0x00, // ###       ###             ###
	0x00, //  ###       ###           ####
	0x00, //  ####      ###          #### 
	0x01, //   #####     ####       ####  
	0xFF, //    #######################   
	0xFF, //      ####################    
	0xF8, //          ############        
	0x00, //                              

	0x00, //      ##         #######      
	0x07, //    ####      #############   
	0x0F, //  ######     ###############  
	0x1F, //  ####      #####      ###### 
	0x1C, // ####       ###          #### 
	0x3C, // ###       ####           ####
	0x38, // ###       ###             ###
	0x38, // ###       ###             ###
	0x38, // ###       ###             ###
	0x1C, //  ###       ###           ####
	0x1C, //  ####      ###          #### 
	0x0F, //   #####     ####       ####  
	0xFF, //    #######################   
	0xFF, //      ####################    
	0x7F, //          ############        
	0x00, //                              

	0x06, //      ##         #######      
	0x1E, //    ####      #############   
	0x7E, //  ######     ###############  
	0x78, //  ####      #####      ###### 
	0xF0, // ####       ###          #### 
	0xE0, // ###       ####           ####
	0xE0, // ###       ###             ###
	0xE0, // ###       ###             ###
	0xE0, // ###       ###             ###
	0x70, //  ###       ###           ####
	0x78, //  ####      ###          #### 
	0x3E, //   #####     ####       ####  
	0x1F, //    #######################   
	0x07, //      ####################    
	0x00, //          ############        
	0x00, //                              

	// @768 ':' (16 pixels wide)
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x38, // ###               ###
	0x38, // ###               ###
	0x38, // ###               ###
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //             

	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, // ###               ###
	0x00, // ###               ###
	0x00, // ###               ###
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //             

	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0xE0, // ###               ###
	0xE0, // ###               ###
	0xE0, // ###               ###
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //             

	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, // ###               ###
	0x00, // ###               ###
	0x00, // ###               ###
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00, //                      
	0x00,  //       

};

const DCfont TinyOLED4kfont16x32DigitsExt = {
  (uint8_t *)ssd1306xled_font16x32_digits_ext,
  16, // character width in pixels
  4, // character height in pages (8 pixels)
  0x2C,0x3B // ASCII extents
  };

// for backwards compatibility
#define FONT16X32DIGITS_EXT (&TinyOLED4kfont16x32DigitsExt)