/*
   PIC 12F675 register definition for CCS compiler
   Daniel Jose Viana, 2016 - danjovic@hotmail.com
   
   January 8, 2016
   
   This header file defines configurations, registers, and other useful
   bits of information for the PIC12F675 microcontroller.  These names
   are taken to match the data sheets as closely as possible.
*/

#ifndef __12F675_REGS_H__
#define __12F675_REGS_H__

// Based on PIC12F629. This file defines the extra registers and bits
#include "pic12F629_regs.h"


//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#byte ADRESH      = 0x1E        
#byte ADCON0      = 0x1F        
    
#byte EECON2      = 0x9D
#byte ADRESL      = 0x9E        
#byte ANSEL       = 0x9F


//==========================================================================
//
//       BIT Allocation per registers
//
//==========================================================================

//---- ADCON0 Bits --------------------------------------------------------
#bit ADFM     = ADCON0.7
#bit VCFG     = ADCON0.6
#bit CHS1     = ADCON0.3
#bit CHS0     = ADCON0.2
#bit GO_DONE  = ADCON0.1
#bit ADON     = ADCON0.0

#bit GO       = ADCON0.1  // Alternate names
#bit NOT_DONE = ADCON0.1

//---- ANSEL Bits ---------------------------------------------------------
#bit ADCS2 = ANSEL.6
#bit ADCS1 = ANSEL.5
#bit ADCS0 = ANSEL.4
#bit ANS3  = ANSEL.3
#bit ANS2  = ANSEL.2
#bit ANS1  = ANSEL.1
#bit ANS0  = ANSEL.0

//========================================================================== 
#endif // __12F675_REGS_H__

