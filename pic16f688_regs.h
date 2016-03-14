/*
   PIC 16F688 register definition for CCS compiler
   Daniel Jose Viana, 2016 - danjovic@hotmail.com
   
   January 8, 2016
   
   This header file defines configurations, registers, and other useful
   bits of information for the PIC16F688 microcontroller.  These names
   are taken to match the data sheets as closely as possible.
*/

#ifndef __16F688_REGS_H__
#define __16F688_REGS_H__


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

#byte PORTC      = 0x07

#byte PCLATH     = 0x0A
#byte INTCON     = 0x0B
#byte PIR1       = 0x0C

#byte TMR1L      = 0x0E
#byte TMR1H      = 0x0F
#byte T1CON      = 0x10
#byte BAUDCTL    = 0x11
#byte SPBRGH     = 0x12
#byte SPBRG      = 0x13
#byte RCREG      = 0x14
#byte TXREG      = 0x15
#byte TXSTA      = 0x16
#byte RCSTA      = 0x17
#byte WDTCON     = 0x18
#byte CMCON0     = 0x19
#byte CMCON1     = 0x1A

#byte ADRESH     = 0x1E
#byte ADCON0     = 0x1F

#byte OPTION_REG = 0x81

#byte TRISA      = 0x85
#byte TRISC      = 0x87

#byte PIE1       = 0x8C

#byte PCON       = 0x8E
#byte OSCCON     = 0x8F
#byte OSCTUNE    = 0x90
#byte ANSEL      = 0x91

#byte WPUA       = 0x95

#byte IOCA       = 0x96

#byte EEDATH     = 0x97
#byte EEADRH     = 0x98
#byte VRCON      = 0x99
#byte EEDATA     = 0x9A

#byte EEADR      = 0x9B
#byte EECON1     = 0x9C
#byte EECON2     = 0x9D
#byte ADRESL     = 0x9E
#byte ADCON1     = 0x9F

// Alternate names
#define OPTION OPTION_REG
#define WPU WPUA
#define IOC IOCA 
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

//----- INTCON Bits --------------------------------------------------------
#bit GIE  = INTCON.7
#bit PEIE = INTCON.6
#bit T0IE = INTCON.5
#bit INTE = INTCON.4
#bit RAIE = INTCON.3
#bit T0IF = INTCON.2
#bit INTF = INTCON.1
#bit RAIF = INTCON.0

//----- PIR1 Bits ----------------------------------------------------------
#bit EEIF   = PIR1.7
#bit ADIF   = PIR1.6
#bit RCIF   = PIR1.5
#bit C2IF   = PIR1.4
#bit C1IF   = PIR1.3
#bit OSFIF  = PIR1.2
#bit TXIF   = PIR1.1
#bit T1IF   = PIR1.0
#bit TMR1IF = PIR1.0

//----- T1CON Bits ---------------------------------------------------------
#bit T1GINV      = T1CON.7
#bit TMR1GE      = T1CON.6
#bit T1CKPS1     = T1CON.5
#bit T1CKPS0     = T1CON.4
#bit T1OSCEN     = T1CON.3
#bit NOT_T1SYNC  = T1CON.2
#bit TMR1CS      = T1CON.1
#bit TMR1ON      = T1CON.0

//----- BAUDCTL Bits --------------------------------------------------------
#bit ABDOVF = BAUDCTL.7
#bit RCIDL  = BAUDCTL.6
#bit SCKP   = BAUDCTL.4
#bit BRG16  = BAUDCTL.3
#bit WUE    = BAUDCTL.1
#bit ABDEN  = BAUDCTL.0

//----- TXSTA Bits --------------------------------------------------------
#bit CSRC  = TXSTA.7
#bit TX9   = TXSTA.6
#bit TXEN  = TXSTA.5
#bit SYNC  = TXSTA.4
#bit SENDB = TXSTA.3
#bit BRGH  = TXSTA.2
#bit TRMT  = TXSTA.1
#bit TX9D  = TXSTA.0

//----- RCSTA Bits --------------------------------------------------------
#bit SPEN  = RCSTA.7
#bit RX9   = RCSTA.6
#bit SREN  = RCSTA.5
#bit CREN  = RCSTA.4
#bit ADDEN = RCSTA.3
#bit FERR  = RCSTA.2
#bit OERR  = RCSTA.1
#bit RX9D  = RCSTA.0

//----- WDTCON Bits --------------------------------------------------------
#bit WDTPS3 = WDTCON.4
#bit WDTPS2 = WDTCON.3
#bit WDTPS1 = WDTCON.2
#bit WDTPS0 = WDTCON.1
#bit SWDTEN = WDTCON.0

//----- CMCON0 Bits -------------------------------------------------------
#bit C2_OUT = CMCON0.7
#bit C1_OUT = CMCON0.6
#bit C2_INV = CMCON0.5
#bit C1_INV = CMCON0.4
#bit CIS    = CMCON0.3
#bit CM2    = CMCON0.2
#bit CM1    = CMCON0.1
#bit CM0    = CMCON0.0

//----- CMCON1 Bits -------------------------------------------------------
#bit T1GSS  = CMCON1.1
#bit C2SYNC = CMCON1.0

//----- ADCON0 Bits --------------------------------------------------------
#bit ADFM     = ADCON0.7
#bit VCFG     = ADCON0.6
#bit CHS2     = ADCON0.4
#bit CHS1     = ADCON0.3
#bit CHS0     = ADCON0.2
#bit _GO       = ADCON0.1
#bit NOT_DONE = ADCON0.1
#bit GO_DONE  = ADCON0.1
#bit ADON     = ADCON0.0

//----- OPTION Bits --------------------------------------------------------
#bit NOT_RAPU = OPTION.7
#bit INTEDG   = OPTION.6
#bit T0CS     = OPTION.5
#bit T0SE     = OPTION.4
#bit PSA      = OPTION.3
#bit PS2      = OPTION.2
#bit PS1      = OPTION.1
#bit PS0      = OPTION.0

//----- PIE1 Bits ----------------------------------------------------------
#bit EEIE   = PIE1.7
#bit ADIE   = PIE1.6
#bit RCIE   = PIE1.5
#bit C2IE   = PIE1.4
#bit C1IE   = PIE1.3
#bit OSFIE  = PIE1.2
#bit TXIE   = PIE1.1
#bit T1IE   = PIE1.0
#bit TMR1IE = PIE1.0

//----- PCON Bits ----------------------------------------------------------
#bit ULPWUE  = PCON.5
#bit SBODEN  = PCON.4
#bit NOT_POR = PCON.1
#bit NOT_BOD = PCON.0

//----- OSCCON Bits --------------------------------------------------------
#bit IRCF2 = OSCCON.6
#bit IRCF1 = OSCCON.5
#bit IRCF0 = OSCCON.4
#bit OSTS  = OSCCON.3
#bit HTS   = OSCCON.2
#bit LTS   = OSCCON.1
#bit SCS   = OSCCON.0

//----- OSCTUNE Bits -------------------------------------------------------
#bit TUN4 = OSCTUNE.4
#bit TUN3 = OSCTUNE.3
#bit TUN2 = OSCTUNE.2
#bit TUN1 = OSCTUNE.1
#bit TUN0 = OSCTUNE.0

//----- ANSEL Bits ---------------------------------------------------------
#bit ANS7 = ANSEL.7
#bit ANS6 = ANSEL.6
#bit ANS5 = ANSEL.5
#bit ANS4 = ANSEL.4
#bit ANS3 = ANSEL.3
#bit ANS2 = ANSEL.2
#bit ANS1 = ANSEL.1
#bit ANS0 = ANSEL.0

//----- IOC Bits ---------------------------------------------------------
#bit IOC5 = IOC.5
#bit IOC4 = IOC.4
#bit IOC3 = IOC.3
#bit IOC2 = IOC.2
#bit IOC1 = IOC.1
#bit IOC0 = IOC.0

//----- IOCA Bits ---------------------------------------------------------
#bit IOCA5 = IOCA.5
#bit IOCA4 = IOCA.4
#bit IOCA3 = IOCA.3
#bit IOCA2 = IOCA.2
#bit IOCA1 = IOCA.1
#bit IOCA0 = IOCA.0

//----- VRCON Bits ---------------------------------------------------------
#bit VREN = VRCON.7
#bit VRR  = VRCON.5
#bit VR3  = VRCON.3
#bit VR2  = VRCON.2
#bit VR1  = VRCON.1
#bit VR0  = VRCON.0

//----- EECON1 Bits --------------------------------------------------------
#bit EEPGD = EECON1.7
#bit WRERR = EECON1.3
#bit WREN  = EECON1.2
#bit WR    = EECON1.1
#bit RD    = EECON1.0

//----- ADCON1 Bits --------------------------------------------------------
#bit ADCS2 = ADCON1.6
#bit ADCS1 = ADCON1.5
#bit ADCS0 = ADCON1.4

//========================================================================== 
#endif __16F688_REGS_H__


