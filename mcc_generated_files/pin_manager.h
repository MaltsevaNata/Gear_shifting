/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set key_1 aliases
#define key_1_TRIS                 TRISAbits.TRISA0
#define key_1_LAT                  LATAbits.LATA0
#define key_1_PORT                 PORTAbits.RA0
#define key_1_WPU                  WPUAbits.WPUA0
#define key_1_OD                   ODCONAbits.ODCA0
#define key_1_ANS                  ANSELAbits.ANSA0
#define key_1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define key_1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define key_1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define key_1_GetValue()           PORTAbits.RA0
#define key_1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define key_1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define key_1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define key_1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define key_1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define key_1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define key_1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define key_1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set key_2 aliases
#define key_2_TRIS                 TRISAbits.TRISA1
#define key_2_LAT                  LATAbits.LATA1
#define key_2_PORT                 PORTAbits.RA1
#define key_2_WPU                  WPUAbits.WPUA1
#define key_2_OD                   ODCONAbits.ODCA1
#define key_2_ANS                  ANSELAbits.ANSA1
#define key_2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define key_2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define key_2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define key_2_GetValue()           PORTAbits.RA1
#define key_2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define key_2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define key_2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define key_2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define key_2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define key_2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define key_2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define key_2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set ignit_kill aliases
#define ignit_kill_TRIS                 TRISAbits.TRISA2
#define ignit_kill_LAT                  LATAbits.LATA2
#define ignit_kill_PORT                 PORTAbits.RA2
#define ignit_kill_WPU                  WPUAbits.WPUA2
#define ignit_kill_OD                   ODCONAbits.ODCA2
#define ignit_kill_ANS                  ANSELAbits.ANSA2
#define ignit_kill_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ignit_kill_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ignit_kill_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ignit_kill_GetValue()           PORTAbits.RA2
#define ignit_kill_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ignit_kill_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ignit_kill_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define ignit_kill_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define ignit_kill_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define ignit_kill_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define ignit_kill_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define ignit_kill_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set button_low aliases
#define button_low_TRIS                 TRISAbits.TRISA4
#define button_low_LAT                  LATAbits.LATA4
#define button_low_PORT                 PORTAbits.RA4
#define button_low_WPU                  WPUAbits.WPUA4
#define button_low_OD                   ODCONAbits.ODCA4
#define button_low_ANS                  ANSELAbits.ANSA4
#define button_low_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define button_low_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define button_low_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define button_low_GetValue()           PORTAbits.RA4
#define button_low_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define button_low_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define button_low_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define button_low_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define button_low_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define button_low_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define button_low_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define button_low_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set button_high aliases
#define button_high_TRIS                 TRISAbits.TRISA5
#define button_high_LAT                  LATAbits.LATA5
#define button_high_PORT                 PORTAbits.RA5
#define button_high_WPU                  WPUAbits.WPUA5
#define button_high_OD                   ODCONAbits.ODCA5
#define button_high_ANS                  ANSELAbits.ANSA5
#define button_high_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define button_high_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define button_high_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define button_high_GetValue()           PORTAbits.RA5
#define button_high_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define button_high_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define button_high_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define button_high_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define button_high_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define button_high_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define button_high_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define button_high_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set button_neutral aliases
#define button_neutral_TRIS                 TRISBbits.TRISB0
#define button_neutral_LAT                  LATBbits.LATB0
#define button_neutral_PORT                 PORTBbits.RB0
#define button_neutral_WPU                  WPUBbits.WPUB0
#define button_neutral_OD                   ODCONBbits.ODCB0
#define button_neutral_ANS                  ANSELBbits.ANSB0
#define button_neutral_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define button_neutral_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define button_neutral_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define button_neutral_GetValue()           PORTBbits.RB0
#define button_neutral_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define button_neutral_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define button_neutral_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define button_neutral_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define button_neutral_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define button_neutral_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define button_neutral_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define button_neutral_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/