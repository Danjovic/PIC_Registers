/*
   PIC 16F627 register definition for CCS compiler
   Daniel Jose Viana, 2016 - danjovic@hotmail.com
   
   January 8, 2016
   
   This header file defines configurations, registers, and other useful
   bits of information for the PIC16F627 microcontroller.  These names
   are taken to match the data sheets as closely as possible.
*/

#ifndef __16F627_REGS_H__
#define __16F627_REGS_H__

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#byte INDF       = 0x00
#byte TMR0       = 0x01
#byte PCL        = 0x02
#byte STATUS     = 0x03
#byte FSR        = 0x04
#byte PORTA      = 0x05
#byte PORTB      = 0x06
#byte PCLATH     = 0x0A
#byte INTCON     = 0x0B
#byte PIR1       = 0x0C
#byte TMR1L      = 0x0E
#byte TMR1H      = 0x0F
#byte T1CON      = 0x10
#byte TMR2       = 0x11
#byte T2CON      = 0x12
#byte CCPR1L     = 0x15
#byte CCPR1H     = 0x16
#byte CCP1CON    = 0x17
#byte RCSTA      = 0x18
#byte TXREG      = 0x19
#byte RCREG      = 0x1A
#byte CMCON      = 0x1F

#byte OPTION_REG = 0x81
#byte TRISA      = 0x85
#byte TRISB      = 0x86
#byte PIE1       = 0x8C
#byte PCON       = 0x8E
#byte PR2        = 0x92
#byte TXSTA      = 0x98
#byte SPBRG      = 0x99
#byte EEDATA     = 0x9A
#byte EEADR      = 0x9B
#byte EECON1     = 0x9C
#byte EECON2     = 0x9D
#byte VRCON      = 0x9F



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


//---- INTCON Bits --------------------------------------------------------
#bit GIE  = INTCON.7
#bit PEIE = INTCON.6
#bit T0IE = INTCON.5
#bit INTE = INTCON.4
#bit RBIE = INTCON.3
#bit T0IF = INTCON.2
#bit INTF = INTCON.1
#bit RBIF = INTCON.0


//---- PIR1 Bits ----------------------------------------------------------
#bit EEIF   = PIR1.7
#bit CMIF   = PIR1.6
#bit RCIF   = PIR1.5
#bit TXIF   = PIR1.4
#bit CMIF   = PIR1.3
#bit CCP1IF = PIR1.2
#bit TMR2IF = PIR1.1
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


//---- T2CON Bits ---------------------------------------------------------
#bit TOUTPS3 = T2CON.6
#bit TOUTPS2 = T2CON.5
#bit TOUTPS1 = T2CON.4
#bit TOUTPS0 = T2CON.3
#bit TMR2ON  = T2CON.2
#bit T2CKPS1 = T2CON.1
#bit T2CKPS0 = T2CON.0


//---- CCP1CON Bits -------------------------------------------------------
#bit CCP1X  = CCP1CON.5
#bit CCP1Y  = CCP1CON.4
#bit CCP1M3 = CCP1CON.3
#bit CCP1M2 = CCP1CON.2
#bit CCP1M1 = CCP1CON.1
#bit CCP1M0 = CCP1CON.0


//---- RCSTA Bits ---------------------------------------------------------
#bit SPEN = RCSTA.7
#bit RX9  = RCSTA.6
#bit SREN = RCSTA.5
#bit CREN = RCSTA.4
#bit ADEN = RCSTA.3
#bit FERR = RCSTA.2
#bit OERR = RCSTA.1
#bit RX9D = RCSTA.0


//---- CMCON Bits ---------------------------------------------------------
#bit C2OUT = CMCON.7
#bit C1OUT = CMCON.6
#bit C2INV = CMCON.5
#bit C1INV = CMCON.4
#bit CIS   = CMCON.3
#bit CM2   = CMCON.2
#bit CM1   = CMCON.1
#bit CM0   = CMCON.0


//---- OPTION Bits --------------------------------------------------------
#bit NOT_RPPU = OPTION_REG.7
#bit INTEDG   = OPTION_REG.6
#bit T0CS     = OPTION_REG.5
#bit T0SE     = OPTION_REG.4
#bit PSA      = OPTION_REG.3
#bit PS2      = OPTION_REG.2
#bit PS1      = OPTION_REG.1
#bit PS0      = OPTION_REG.0

//---- PIE1 Bits ----------------------------------------------------------
#bit EEIE   = PIE1.7
#bit CMIE   = PIE1.6
#bit RCIE   = PIE1.5
#bit TXIE   = PIE1.4
#bit CCP1IE = PIE1.2
#bit TMR2IE = PIE1.1
#bit TMR1IE = PIE1.0

#bit T2IE   = PIE1.1  // Alternate Name
#bit T1IE   = PIE1.0


//---- PCON Bits ----------------------------------------------------------
#bit OSCF    = PCON.3
#bit NOT_POR = PCON.1
#bit NOT_BO  = PCON.0

#bit NOT_BOR = PCON.0  // Alternate Name
#bit NOT_BOD = PCON.0  //  Backwards compatability to 16F62X


//---- TXSTA Bits ----------------------------------------------------------
#bit CSRC = TXSTA.7
#bit TX9  = TXSTA.6
#bit TXEN = TXSTA.5
#bit SYNC = TXSTA.4
#bit BRGH = TXSTA.2
#bit TRMT = TXSTA.1
#bit TX9D = TXSTA.0

//---- EECON1 Bits --------------------------------------------------------
#bit WRERR = EECON1.3
#bit WREN  = EECON1.2
#bit WR    = EECON1.1
#bit RD    = EECON1.0

//---- VRCON Bits ---------------------------------------------------------
#bit VREN = VRCON.7
#bit VROE = VRCON.6
#bit VRR  = VRCON.5
#bit VR3  = VRCON.3
#bit VR2  = VRCON.2
#bit VR1  = VRCON.1
#bit VR0  = VRCON.0


//========================================================================== 
#endif // __16F627_REGS_H__