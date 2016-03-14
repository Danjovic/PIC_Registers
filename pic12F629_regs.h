/*
   PIC 12F629 register definition for CCS compiler
   Daniel Jose Viana, 2016 - danjovic@hotmail.com
   
   January 8, 2016
   
   This header file defines configurations, registers, and other useful
   bits of information for the PIC12F629 microcontroller.  These names
   are taken to match the data sheets as closely as possible.
*/

#ifndef __12F629_REGS_H__
#define __12F629_REGS_H__

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

//---- Register Files------------------------------------------------------

#byte INDF        = 0x00
#byte TMR0        = 0x01
#byte PCL         = 0x02
#byte STATUS      = 0x03
#byte FSR         = 0x04
#byte GPIO        = 0x05
    
#byte PCLATH      = 0x0A
#byte INTCON      = 0x0B
#byte PIR1        = 0x0C
    
#byte TMR1L       = 0x0E        
#byte TMR1H       = 0x0F        
#byte T1CON       = 0x10        
    
#byte CMCON       = 0x19        
    
//#byte ADRESH      = 0x1E   // PIC12F675 only       
//#byte ADCON0      = 0x1F        
    
    
#byte OPTION_REG  = 0x81
    
#byte TRISIO      = 0x85
    
#byte PIE1        = 0x8C
    
#byte PCON        = 0x8E
    
#byte OSCCAL      = 0x90
    
#byte WPU         = 0x95
#byte IOC         = 0x96
#byte IOCB        = 0x96
    
#byte VRCON       = 0x99
#byte EEDATA      = 0x9A   
#byte EEADR       = 0x9B    
#byte EECON1      = 0x9C
// #byte EECON2      = 0x9D  // PIC12F675 only
// #byte ADRESL      = 0x9E        
// #byte ANSEL       = 0x9F



// Alternate names
#define OPTION OPTION_REG
#define EEDAT EEDATA

//==========================================================================
//
//       BIT Allocation per registers
//
//==========================================================================

//---- STATUS Bits --------------------------------------------------------
#bit IRP          = STATUS.7
#bit RP1          = STATUS.6
#bit RP0          = STATUS.5
#bit NOT_TO       = STATUS.4
#bit NOT_PD       = STATUS.3
#bit _Z           = STATUS.2
#bit _DC          = STATUS.1
#bit _C           = STATUS.0

#bit _TIMEOUT     = STATUS.4  // Alternate Names
#bit _POWERDOWN   = STATUS.3
#bit _ZERO        = STATUS.2
#bit _DIGIT_CARRY = STATUS.1
#bit _CARRY       = STATUS.0

//---- GPIO Bits --------------------------------------------------------
#bit GPIO5 = GPIO.5
#bit GPIO4 = GPIO.4
#bit GPIO3 = GPIO.3
#bit GPIO2 = GPIO.2
#bit GPIO1 = GPIO.1
#bit GPIO0 = GPIO.0

#bit GP5   = GPIO.5  // Alternate Names
#bit GP4   = GPIO.4
#bit GP3   = GPIO.3
#bit GP2   = GPIO.2
#bit GP1   = GPIO.1
#bit GP0   = GPIO.0

//---- INTCON Bits --------------------------------------------------------
#bit GIE  = INTCON.7
#bit PEIE = INTCON.6
#bit T0IE = INTCON.5
#bit INTE = INTCON.4
#bit GPIE = INTCON.3
#bit T0IF = INTCON.2
#bit INTF = INTCON.1
#bit GPIF = INTCON.0

//---- PIR1 Bits ----------------------------------------------------------
#bit EEIF   = PIR1.7
#bit ADIF   = PIR1.6
#bit CMIF   = PIR1.3
#bit TMR1IF = PIR1.0

#bit T1IF   = PIR1.0  // Alternate Name

//---- T1CON Bits ---------------------------------------------------------
#bit TMR1GE     = T1CON.6
#bit T1CKPS1    = T1CON.5
#bit T1CKPS0    = T1CON.4
#bit T1OSCEN    = T1CON.3
#bit NOT_T1SYNC = T1CON.2
#bit TMR1CS     = T1CON.1
#bit TMR1ON     = T1CON.0

//---- CMCON Bits --------------------------------------------------------
#bit COUT = CMCON.6
#bit CINV = CMCON.4
#bit CIS  = CMCON.3
#bit CM2  = CMCON.2
#bit CM1  = CMCON.1
#bit CM0  = CMCON.0

//---- ADCON0 Bits --------------------------------------------------------
//#bit ADFM     = ADCON0.7  // PIC12F675 only
//#bit VCFG     = ADCON0.6
//#bit CHS1     = ADCON0.3
//#bit CHS0     = ADCON0.2
//#bit GO_DONE  = ADCON0.1
//#bit ADON     = ADCON0.0
//
//#bit GO       = ADCON0.1
//#bit NOT_DONE = ADCON0.1

//---- OPTION Bits --------------------------------------------------------
#bit NOT_GPPU = OPTION_REG.7
#bit INTEDG   = OPTION_REG.6
#bit T0CS     = OPTION_REG.5
#bit T0SE     = OPTION_REG.4
#bit PSA      = OPTION_REG.3
#bit PS2      = OPTION_REG.2
#bit PS1      = OPTION_REG.1
#bit PS0      = OPTION_REG.0

//---- PIE1 Bits ----------------------------------------------------------
#bit EEIE   = PIE1.7
#bit ADIE   = PIE1.6
#bit CMIE   = PIE1.3
#bit TMR1IE = PIE1.0

#bit T1IE   = PIE1.0  // Alternate Name

//---- PCON Bits ----------------------------------------------------------
#bit NOT_POR = PCON.1
#bit NOT_BOD = PCON.0

//---- OSCCAL Bits --------------------------------------------------------
#bit CAL5 = OSCCAL.7
#bit CAL4 = OSCCAL.6
#bit CAL3 = OSCCAL.5
#bit CAL2 = OSCCAL.4
#bit CAL1 = OSCCAL.3
#bit CAL0 = OSCCAL.2

//---- IOCB Bits --------------------------------------------------------
#bit IOCB5 = IOCB.5
#bit IOCB4 = IOCB.4
#bit IOCB3 = IOCB.3
#bit IOCB2 = IOCB.2
#bit IOCB1 = IOCB.1
#bit IOCB0 = IOCB.0

//---- IOC Bits --------------------------------------------------------
#bit IOC5 =IOC.5
#bit IOC4 =IOC.4
#bit IOC3 =IOC.3
#bit IOC2 =IOC.2
#bit IOC1 =IOC.1
#bit IOC0 =IOC.0

//---- VRCON Bits ---------------------------------------------------------
#bit VREN = VRCON.7
#bit VRR  = VRCON.5
#bit VR3  = VRCON.3
#bit VR2  = VRCON.2
#bit VR1  = VRCON.1
#bit VR0  = VRCON.0

//---- EECON1 Bits --------------------------------------------------------
#bit WRERR = EECON1.3
#bit WREN  = EECON1.2
#bit WR    = EECON1.1
#bit RD    = EECON1.0

//---- ANSEL Bits ---------------------------------------------------------
//#bit ADCS2 = ANSEL.6  // PIC12F675 only
//#bit ADCS1 = ANSEL.5
//#bit ADCS0 = ANSEL.4
//#bit ANS3  = ANSEL.3
//#bit ANS2  = ANSEL.2
//#bit ANS1  = ANSEL.1
//#bit ANS0  = ANSEL.0

//========================================================================== 
#endif // __12F629_REGS_H__