/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18855
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include <xc.h> 

/*
                         Main application
 */

int gearCounter;  

void delay_ms(unsigned int milliseconds) {
    while(milliseconds > 0)
    {
       __delay_ms(1);
      milliseconds--;
    }
    return;
}

void turnOn_upShift(int duration_ms) {

    key_1_SetHigh(); //1st key on
    delay_ms(duration_ms);
    ignit_kill_SetHigh(); //ignition kill on
    delay_ms(80);
    key_1_SetLow(); //1st key off
    __delay_ms(20);
    ignit_kill_SetLow(); //ignition kill off
    delay_ms(200);
    key_2_SetHigh(); //2nd key on
    __delay_ms(50);
    key_2_SetLow(); //2nd key off

    return;
}
 
void turnOn_downShift(int duration_ms) {

    key_2_SetHigh(); //2 key on
    delay_ms(duration_ms);
    ignit_kill_SetHigh(); //ignition kill on
    __delay_ms(80);
    key_2_SetLow(); //2 key off
    __delay_ms(20);
    ignit_kill_SetLow(); //ignition kill off
    __delay_ms(200);
    key_1_SetHigh(); //1 key on
    __delay_ms(50);
    key_1_SetLow(); //1 key off
    
    return;
}
    
 
 
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    unsigned char address = 0xE5;    
    //eeprom_write(address, 1);
    gearCounter = eeprom_read (address);
    int buttonState_high = LOW;         
    int lastButtonState_high = LOW;    
    int buttonState_low = LOW;      
    int lastButtonState_low = LOW;    
    int neutral_state = LOW;
    int last_neutral_state = LOW;
    int time = 0;
    
    
    //int check_but;
    while (1)
    {
        /*check_but = check_GetValue();
        if (check_but == LOW) {
            printf("pressed \n");
        }
        else printf("unpressed \n");*/
        
        neutral_state = !button_neutral_GetValue();
        
        
        if (neutral_state != last_neutral_state) {
            if (neutral_state == HIGH) {
                if (gearCounter == -1) {
                    turnOn_upShift(40);
                    gearCounter = 0;
                }
                else if (gearCounter == 1) {
                    turnOn_downShift(40);
                    gearCounter = 0;
                    eeprom_write(address, gearCounter);
                }
                
                
                
            }
            last_neutral_state = neutral_state;
            continue;
            
        }
        
        buttonState_high = !button_high_GetValue(); //negative because of pull down
        buttonState_low = !button_low_GetValue(); //negative because of pull down
        if (buttonState_high != lastButtonState_high) {
            if (buttonState_high==HIGH) { 
                    if (gearCounter < 4) {
                        if (gearCounter == -1) {
                            gearCounter += 2;
                            eeprom_write(address, gearCounter);
                        }
                        else {
                            gearCounter++;
                            eeprom_write(address, gearCounter);
                        }
                        turnOn_upShift(120);
                    }
            }
        }
        if (buttonState_low != lastButtonState_low) {
            if (buttonState_low==HIGH) { 
                    if (gearCounter > -1) {
                        if (gearCounter == 1) {
                            gearCounter -= 2;
                            eeprom_write(address, gearCounter);
                        }
                        else {
                            gearCounter--;
                            eeprom_write(address, gearCounter);
                        }
                        turnOn_downShift(120);
                    }
            }
        }
        
        
        
        lastButtonState_high = buttonState_high;
        lastButtonState_low = buttonState_low;
        __delay_ms(50);
        time+=50;
        if (time >= 1000) {
            printf("neutral %d \n \r", neutral_state);
            printf("Gear %d \n \r", gearCounter);
        }
    }
}
/**
 End of File
*/