/*
   PIC 18F4550 register definition for CCS compiler
   Daniel Jose Viana, 2016 - danjovic@hotmail.com
   
   January 8, 2016
   
   This header file defines configurations, registers, and other useful
   bits of information for the PIC18F4550 microcontroller.  These names
   are taken to match the data sheets as closely as possible.
*/

#ifndef __18F4550_REGS_H__
#define __18F4550_REGS_H__

// Based on PIC18F2550. This file defines the extra registers and bits
#include "pic18F2550_regs.h"


//==========================================================================
//
//       Register Definitions
//
//==========================================================================
#byte SPPDATA  = 0x0F62
#byte SPPCFG   = 0x0F63
#byte SPPEPS   = 0x0F64
#byte SPPCON   = 0x0F65
#byte PORTD    = 0x0F83
#byte LATD     = 0x0F8C
#byte LATE     = 0x0F8D
#byte TRISD    = 0x0F95
#byte TRISE    = 0x0F96
#byte ECCP1CON = 0x0FBD


// Alternate names  
#define DDRD     TRISD      
#define DDRE     TRISE           


//==========================================================================
//
//       BIT Allocation per registers
//
//==========================================================================


//---- SPPCFG Bits ----------------------------------------------------
#bit WS0     = SPPCFG.0
#bit WS1     = SPPCFG.1
#bit WS2     = SPPCFG.2
#bit WS3     = SPPCFG.3
#bit CLK1EN  = SPPCFG.4
#bit CSEN    = SPPCFG.5
#bit CLKCFG0 = SPPCFG.6
#bit CLKCFG1 = SPPCFG.7
 
 
//---- SPPEPS Bits ----------------------------------------------------
#bit ADDR_0   = SPPEPS.0
#bit ADDR_1   = SPPEPS.1
#bit ADDR_2   = SPPEPS.2
#bit ADDR_3   = SPPEPS.3
#bit SPPBUSY = SPPEPS.4
#bit WRSPP   = SPPEPS.6
#bit RDSPP   = SPPEPS.7
 
 
//---- SPPCON Bits ----------------------------------------------------
#bit SPPEN  = SPPCON.0
#bit SPPOWN = SPPCON.1
 
 
//---- PORTD Bits -----------------------------------------------------
#bit RD0  = PORTD.0
#bit RD1  = PORTD.1
#bit RD2  = PORTD.2
#bit RD3  = PORTD.3
#bit RD4  = PORTD.4
#bit RD5  = PORTD.5
#bit RD6  = PORTD.6
#bit RD7  = PORTD.7

#bit SPP0 = PORTD.0  // Alternate names/function
#bit SPP1 = PORTD.1
#bit SPP2 = PORTD.2
#bit SPP3 = PORTD.3
#bit SPP4 = PORTD.4
#bit SPP5 = PORTD.5
#bit SPP6 = PORTD.6
#bit SPP7 = PORTD.7

 
//---- PORTE Bits -----------------------------------------------------
#bit RE0    = PORTE.0
#bit RE1    = PORTE.1
#bit RE2    = PORTE.2
#bit RDPU   = PORTE.7

#bit CK1SPP = PORTE.0  // Alternate names/function
#bit CK2SPP = PORTE.1
#bit OESPP  = PORTE.2


//---- LATD Bits ------------------------------------------------------
#bit LATD0 = LATD.0
#bit LATD1 = LATD.1
#bit LATD2 = LATD.2
#bit LATD3 = LATD.3
#bit LATD4 = LATD.4
#bit LATD5 = LATD.5
#bit LATD6 = LATD.6
#bit LATD7 = LATD.7

 
//---- LATE Bits ------------------------------------------------------
#bit LATE0 = LATE.0
#bit LATE1 = LATE.1
#bit LATE2 = LATE.2
 

//---- DDRD Bits ------------------------------------------------------
#bit DDRD0 = DDRD.0
#bit DDRD1 = DDRD.1
#bit DDRD2 = DDRD.2
#bit DDRD3 = DDRD.3
#bit DDRD4 = DDRD.4
#bit DDRD5 = DDRD.5
#bit DDRD6 = DDRD.6
#bit DDRD7 = DDRD.7
 
 
//---- TRISD Bits -----------------------------------------------------
#bit TRISD0 = TRISD.0
#bit TRISD1 = TRISD.1
#bit TRISD2 = TRISD.2
#bit TRISD3 = TRISD.3
#bit TRISD4 = TRISD.4
#bit TRISD5 = TRISD.5
#bit TRISD6 = TRISD.6
#bit TRISD7 = TRISD.7
 
 
//---- DDRE Bits ------------------------------------------------------
#bit DDRE0 = DDRE.0
#bit DDRE1 = DDRE.1
#bit DDRE2 = DDRE.2
 
 
//---- TRISE Bits -----------------------------------------------------
#bit TRISE0 =TRISE.0
#bit TRISE1 =TRISE.1
#bit TRISE2 =TRISE.2
 
 
//---- PIE1 Bits ------------------------------------------------------
#bit SPPIE = PIE1.7


//---- PIR1 Bits ------------------------------------------------------
#bit SPPIF = PIR1.7


//---- IPR1 Bits ------------------------------------------------------
#bit SPPIP = IPR1.7


//---- ECCP1AS Bits ---------------------------------------------------
#bit PSSBD0 = ECCP1AS.0
#bit PSSBD1 = ECCP1AS.1

//---- ECCP1DEL Bits --------------------------------------------------
#bit PDC0 = ECCP1DEL.0
#bit PDC1 = ECCP1DEL.1
#bit PDC2 = ECCP1DEL.2
#bit PDC3 = ECCP1DEL.3
#bit PDC4 = ECCP1DEL.4
#bit PDC5 = ECCP1DEL.5
#bit PDC6 = ECCP1DEL.6


//---- ECCP1CON Bits --------------------------------------------------
#bit P1M0 = ECCP1CON.6
#bit P1M1 = ECCP1CON.7
 

//========================================================================== 
#endif __18F4550_REGS_H__
 