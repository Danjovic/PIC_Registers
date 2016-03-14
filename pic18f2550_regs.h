/*
   PIC 18F2550 register definition for CCS compiler
   Daniel Jose Viana, 2016 - danjovic@hotmail.com
   
   January 8, 2016
   
   This header file defines configurations, registers, and other useful
   bits of information for the PIC18F2550 microcontroller.  These names
   are taken to match the data sheets as closely as possible.
*/

#ifndef __18F2550_REGS_H__
#define __18F2550_REGS_H__

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#byte  UFRML    = 0x0F66
#byte  UFRMH    = 0x0F67
#byte  UIR      = 0x0F68
#byte  UIE      = 0x0F69
#byte  UEIR     = 0x0F6A
#byte  UEIE     = 0x0F6B
#byte  USTAT    = 0x0F6C
#byte  UCON     = 0x0F6D
#byte  UADDR    = 0x0F6E
#byte  UCFG     = 0x0F6F
#byte  UEP0     = 0x0F70
#byte  UEP1     = 0x0F71
#byte  UEP2     = 0x0F72
#byte  UEP3     = 0x0F73
#byte  UEP4     = 0x0F74
#byte  UEP5     = 0x0F75
#byte  UEP6     = 0x0F76
#byte  UEP7     = 0x0F77
#byte  UEP8     = 0x0F78
#byte  UEP9     = 0x0F79
#byte  UEP10    = 0x0F7A
#byte  UEP11    = 0x0F7B
#byte  UEP12    = 0x0F7C
#byte  UEP13    = 0x0F7D
#byte  UEP14    = 0x0F7E
#byte  UEP15    = 0x0F7F
#byte  PORTA    = 0x0F80
#byte  PORTB    = 0x0F81
#byte  PORTC    = 0x0F82
#byte  PORTE    = 0x0F84
#byte  LATA     = 0x0F89
#byte  LATB     = 0x0F8A
#byte  LATC     = 0x0F8B
#byte  TRISA    = 0x0F92
#byte  TRISB    = 0x0F93
#byte  TRISC    = 0x0F94
#byte  OSCTUNE  = 0x0F9B
#byte  PIE1     = 0x0F9D
#byte  PIR1     = 0x0F9E
#byte  IPR1     = 0x0F9F
#byte  PIE2     = 0x0FA0
#byte  PIR2     = 0x0FA1
#byte  IPR2     = 0x0FA2
#byte  EECON1   = 0x0FA6
#byte  EECON2   = 0x0FA7
#byte  EEDATA   = 0x0FA8
#byte  EEADR    = 0x0FA9
#byte  RCSTA    = 0x0FAB
#byte  TXSTA    = 0x0FAC
#byte  TXREG    = 0x0FAD
#byte  RCREG    = 0x0FAE
#byte  SPBRG    = 0x0FAF
#byte  SPBRGH   = 0x0FB0
#byte  T3CON    = 0x0FB1
#byte  TMR3L    = 0x0FB2
#byte  TMR3H    = 0x0FB3
#byte  CMCON    = 0x0FB4
#byte  CVRCON   = 0x0FB5
#byte  ECCP1AS  = 0x0FB6
#byte  ECCP1DEL = 0x0FB7
#byte  BAUDCON  = 0x0FB8
#byte  CCP2CON  = 0x0FBA
#byte  CCPR2    = 0x0FBB
#byte  CCPR2L   = 0x0FBB
#byte  CCPR2H   = 0x0FBC
#byte  CCP1CON  = 0x0FBD
#byte  CCPR1L   = 0x0FBE
#byte  CCPR1H   = 0x0FBF
#byte  ADCON2   = 0x0FC0
#byte  ADCON1   = 0x0FC1
#byte  ADCON0   = 0x0FC2
#byte  ADRESL   = 0x0FC3
#byte  ADRESH   = 0x0FC4
#byte  SSPCON2  = 0x0FC5
#byte  SSPCON1  = 0x0FC6
#byte  SSPSTAT  = 0x0FC7
#byte  SSPADD   = 0x0FC8
#byte  SSPBUF   = 0x0FC9
#byte  T2CON    = 0x0FCA
#byte  PR2      = 0x0FCB
#byte  TMR2     = 0x0FCC
#byte  T1CON    = 0x0FCD
#byte  TMR1L    = 0x0FCE
#byte  TMR1H    = 0x0FCF
#byte  RCON     = 0x0FD0
#byte  WDTCON   = 0x0FD1
#byte  HLVDCON  = 0x0FD2
#byte  OSCCON   = 0x0FD3
#byte  T0CON    = 0x0FD5
#byte  TMR0L    = 0x0FD6
#byte  TMR0H    = 0x0FD7
#byte  STATUS   = 0x0FD8
#byte  FSR2L    = 0x0FD9
#byte  FSR2H    = 0x0FDA
#byte  PLUSW2   = 0x0FDB
#byte  PREINC2  = 0x0FDC
#byte  POSTDEC2 = 0x0FDD
#byte  POSTINC2 = 0x0FDE
#byte  INDF2    = 0x0FDF
#byte  BSR      = 0x0FE0
#byte  FSR1L    = 0x0FE1
#byte  FSR1H    = 0x0FE2
#byte  PLUSW1   = 0x0FE3
#byte  PREINC1  = 0x0FE4
#byte  POSTDEC1 = 0x0FE5
#byte  POSTINC1 = 0x0FE6
#byte  INDF1    = 0x0FE7
#byte  WREG     = 0x0FE8
#byte  FSR0L    = 0x0FE9
#byte  FSR0H    = 0x0FEA
#byte  PLUSW0   = 0x0FEB
#byte  PREINC0  = 0x0FEC
#byte  POSTDEC0 = 0x0FED
#byte  POSTINC0 = 0x0FEE
#byte  INDF0    = 0x0FEF
#byte  INTCON3  = 0x0FF0
#byte  INTCON2  = 0x0FF1
#byte  INTCON   = 0x0FF2
#byte  PRODL    = 0x0FF3
#byte  PRODH    = 0x0FF4
#byte  TABLAT   = 0x0FF5
#byte  TBLPTR   = 0x0FF6
#byte  TBLPTRL  = 0x0FF6
#byte  TBLPTRH  = 0x0FF7
#byte  TBLPTRU  = 0x0FF8
#byte  PCL      = 0x0FF9
#byte  PCLATH   = 0x0FFA
#byte  PCLATU   = 0x0FFB
#byte  STKPTR   = 0x0FFC
#byte  TOSL     = 0x0FFD
#byte  TOSH     = 0x0FFE
#byte  TOSU     = 0x0FFF



// Alternate names
#define  UFRM    UFRML    
#define DDRA     TRISA      
#define DDRB     TRISB      
#define DDRC     TRISC      
#define CCP1AS   ECCP1AS  
#define CCP1DEL  ECCP1DEL
#define CCPR1    CCPR1L    
#define ADRES    ADRESL
#define LVDCON   HLVDCON
#define PROD     PRODL      
#define TBLPTR   TBLPTRL  
#define PC       PCL        
#define TOS      TOSL         


//==========================================================================
//
//       BIT Allocation per registers
//
//==========================================================================

//---- UFRML Bits -----------------------------------------------------
#bit FRM0  = UFRML.0
#bit FRM1  = UFRML.1
#bit FRM2  = UFRML.2
#bit FRM3  = UFRML.3
#bit FRM4  = UFRML.4
#bit FRM5  = UFRML.5
#bit FRM6  = UFRML.6
#bit FRM7  = UFRML.7


//---- UFRMH Bits -----------------------------------------------------
#bit FRM8   = UFRMH.0
#bit FRM9   = UFRMH.1
#bit FRM10  = UFRMH.2


//---- UIR Bits -----------------------------------------------------
#bit URSTIF   = UIR.0
#bit UERRIF   = UIR.1
#bit ACTVIF   = UIR.2
#bit TRNIF    = UIR.3
#bit IDLEIF   = UIR.4
#bit STALLIF  = UIR.5
#bit SOFIF    = UIR.6


//---- UIE Bits -----------------------------------------------------
#bit URSTIE  = UIE.0
#bit UERRIE  = UIE.1
#bit ACTVIE  = UIE.2
#bit TRNIE   = UIE.3
#bit IDLEIE  = UIE.4
#bit STALLIE = UIE.5
#bit SOFIE   = UIE.6


//---- UEIR Bits -----------------------------------------------------
#bit PIDEF    = UEIR.0
#bit CRC5EF   = UEIR.1
#bit CRC16EF  = UEIR.2
#bit DFN8EF   = UEIR.3
#bit BTOEF    = UEIR.4
#bit BTSEF    = UEIR.7


//---- UEIE Bits -----------------------------------------------------
#bit PIDEE    = UEIE.0
#bit CRC5EE   = UEIE.1
#bit CRC16EE  = UEIE.2
#bit DFN8EE   = UEIE.3
#bit BTOEE    = UEIE.4
#bit BTSEE    = UEIE.7


//---- USTAT Bits -----------------------------------------------------
#bit PPBI     = USTAT.1
#bit DIR      = USTAT.2
#bit ENDP0    = USTAT.3
#bit ENDP1    = USTAT.4
#bit ENDP2    = USTAT.5
#bit ENDP3    = USTAT.6


//---- UCON Bits -----------------------------------------------------
#bit USPND   = UCON.1
#bit ESUME   = UCON.2
#bit SBEN    = UCON.3
#bit KTDIS   = UCON.4
#bit E0      = UCON.5
#bit PBRST   = UCON.6


//---- UADDR Bits -----------------------------------------------------
#bit ADDR0    = UADDR.0
#bit ADDR1    = UADDR.1
#bit ADDR2    = UADDR.2
#bit ADDR3    = UADDR.3
#bit ADDR4    = UADDR.4
#bit ADDR5    = UADDR.5
#bit ADDR6    = UADDR.6


//---- UCFG Bits -----------------------------------------------------
#bit PPB0     = UCFG.0
#bit PPB1     = UCFG.1
#bit FSEN     = UCFG.2
#bit UTRDIS   = UCFG.3
#bit UPUEN    = UCFG.4
#bit UOEMON   = UCFG.6
#bit UTEYE    = UCFG.7


//---- UEP0 Bits -----------------------------------------------------
#bit EP0STALL  = UEP0.0
#bit EP0INEN   = UEP0.1
#bit EP0OUTEN  = UEP0.2
#bit EP0CONDIS = UEP0.3
#bit EP0HSHK   = UEP0.4

#define EPSTALL  0            // Endpoint bits
#define EPINEN   1
#define EPOUTEN  2
#define EPCONDIS 3
#define EPHSHK   4


//---- UEP1 Bits -----------------------------------------------------
#bit EP1STALL  = UEP1.0
#bit EP1INEN   = UEP1.1
#bit EP1OUTEN  = UEP1.2
#bit EP1CONDIS = UEP1.3
#bit EP1HSHK   = UEP1.4


//---- UEP2 Bits -----------------------------------------------------
#bit EP2STALL  = UEP2.0
#bit EP2INEN   = UEP2.1
#bit EP2OUTEN  = UEP2.2
#bit EP2CONDIS = UEP2.3
#bit EP2HSHK   = UEP2.4


//---- UEP3 Bits -----------------------------------------------------
#bit EP3STALL  = UEP3.0
#bit EP3INEN   = UEP3.1
#bit EP3OUTEN  = UEP3.2
#bit EP3CONDIS = UEP3.3
#bit EP3HSHK   = UEP3.4


//---- UEP4 Bits -----------------------------------------------------
#bit EP4STALL  = UEP4.0
#bit EP4INEN   = UEP4.1
#bit EP4OUTEN  = UEP4.2
#bit EP4CONDIS = UEP4.3
#bit EP4HSHK   = UEP4.4


//---- UEP5 Bits -----------------------------------------------------
#bit EP5STALL  = UEP5.0
#bit EP5INEN   = UEP5.1
#bit EP5OUTEN  = UEP5.2
#bit EP5CONDIS = UEP5.3
#bit EP5HSHK   = UEP5.4


//---- UEP6 Bits -----------------------------------------------------
#bit EP6STALL  = UEP6.0
#bit EP6INEN   = UEP6.1
#bit EP6OUTEN  = UEP6.2
#bit EP6CONDIS = UEP6.3
#bit EP6HSHK   = UEP6.4


//---- UEP7 Bits -----------------------------------------------------
#bit EP7STALL  = UEP7.0
#bit EP7INEN   = UEP7.1
#bit EP7OUTEN  = UEP7.2
#bit EP7CONDIS = UEP7.3
#bit EP7HSHK   = UEP7.4


//---- UEP8 Bits -----------------------------------------------------
#bit EP8STALL  = UEP8.0
#bit EP8INEN   = UEP8.1
#bit EP8OUTEN  = UEP8.2
#bit EP8CONDIS = UEP8.3
#bit EP8HSHK   = UEP8.4


//---- UEP9 Bits -----------------------------------------------------
#bit EP9STALL  = UEP9.0
#bit EP9INEN   = UEP9.1
#bit EP9OUTEN  = UEP9.2
#bit EP9CONDIS = UEP9.3
#bit EP9HSHK   = UEP9.4


//---- UEP10 Bits -----------------------------------------------------
#bit EP10STALL  = UEP10.0
#bit EP10INEN   = UEP10.1
#bit EP10OUTEN  = UEP10.2
#bit EP10CONDIS = UEP10.3
#bit EP10HSHK   = UEP10.4


//---- UEP11 Bits -----------------------------------------------------
#bit EP11STALL  = UEP11.0
#bit EP11INEN   = UEP11.1
#bit EP11OUTEN  = UEP11.2
#bit EP11CONDIS = UEP11.3
#bit EP11HSHK   = UEP11.4


//---- UEP12 Bits -----------------------------------------------------
#bit EP12STALL  = UEP12.0
#bit EP12INEN   = UEP12.1
#bit EP12OUTEN  = UEP12.2
#bit EP12CONDIS = UEP12.3
#bit EP12HSHK   = UEP12.4


//---- UEP13 Bits -----------------------------------------------------
#bit EP13STALL  = UEP13.0
#bit EP13INEN   = UEP13.1
#bit EP13OUTEN  = UEP13.2
#bit EP13CONDIS = UEP13.3
#bit EP13HSHK   = UEP13.4


//---- UEP14 Bits -----------------------------------------------------
#bit EP14STALL  = UEP14.0
#bit EP14INEN   = UEP14.1
#bit EP14OUTEN  = UEP14.2
#bit EP14CONDIS = UEP14.3
#bit EP14HSHK   = UEP14.4


//---- UEP15 Bits -----------------------------------------------------
#bit EP15STALL  = UEP15.0
#bit EP15INEN   = UEP15.1
#bit EP15OUTEN  = UEP15.2
#bit EP15CONDIS = UEP15.3
#bit EP15HSHK   = UEP15.4


//---- PORTA Bits -----------------------------------------------------
#bit RA0 = PORTA.0
#bit RA1 = PORTA.1
#bit RA2 = PORTA.2
#bit RA3 = PORTA.3
#bit RA4 = PORTA.4
#bit RA5 = PORTA.5
#bit RA6 = PORTA.6


//---- PORTB Bits -----------------------------------------------------
#bit RB0 = PORTB.0
#bit RB1 = PORTB.1
#bit RB2 = PORTB.2
#bit RB3 = PORTB.3
#bit RB4 = PORTB.4
#bit RB5 = PORTB.5
#bit RB6 = PORTB.6
#bit RB7 = PORTB.7


//---- PORTC Bits -----------------------------------------------------
#bit RC0 = PORTC.0
#bit RC1 = PORTC.1
#bit RC2 = PORTC.2
#bit RC4 = PORTC.4
#bit RC5 = PORTC.5
#bit RC6 = PORTC.6
#bit RC7 = PORTC.7


//---- PORTE Bits -----------------------------------------------------
#bit RE3  = PORTE.3


//---- LATA Bits -----------------------------------------------------
#bit LATA0 = LATA.0
#bit LATA1 = LATA.1
#bit LATA2 = LATA.2
#bit LATA3 = LATA.3
#bit LATA4 = LATA.4
#bit LATA5 = LATA.5
#bit LATA6 = LATA.6


//---- LATB Bits -----------------------------------------------------
#bit LATB0 = LATB.0
#bit LATB1 = LATB.1
#bit LATB2 = LATB.2
#bit LATB3 = LATB.3
#bit LATB4 = LATB.4
#bit LATB5 = LATB.5
#bit LATB6 = LATB.6
#bit LATB7 = LATB.7


//---- LATC Bits -----------------------------------------------------
#bit LATC0 = LATC.0
#bit LATC1 = LATC.1
#bit LATC2 = LATC.2
#bit LATC6 = LATC.6
#bit LATC7 = LATC.7


//---- DDRA Bits -----------------------------------------------------
#bit DDRA0 = DDRA.0
#bit DDRA1 = DDRA.1
#bit DDRA2 = DDRA.2
#bit DDRA3 = DDRA.3
#bit DDRA4 = DDRA.4
#bit DDRA5 = DDRA.5
#bit DDRA6 = DDRA.6


//---- TRISA Bits -----------------------------------------------------
#bit TRISA0 = TRISA.0
#bit TRISA1 = TRISA.1
#bit TRISA2 = TRISA.2
#bit TRISA3 = TRISA.3
#bit TRISA4 = TRISA.4
#bit TRISA5 = TRISA.5
#bit TRISA6 = TRISA.6


//---- DDRB Bits -----------------------------------------------------
#bit DDRB0 = DDRB.0
#bit DDRB1 = DDRB.1
#bit DDRB2 = DDRB.2
#bit DDRB3 = DDRB.3
#bit DDRB4 = DDRB.4
#bit DDRB5 = DDRB.5
#bit DDRB6 = DDRB.6
#bit DDRB7 = DDRB.7


//---- TRISB Bits -----------------------------------------------------
#bit TRISB0 = TRISB.0
#bit TRISB1 = TRISB.1
#bit TRISB2 = TRISB.2
#bit TRISB3 = TRISB.3
#bit TRISB4 = TRISB.4
#bit TRISB5 = TRISB.5
#bit TRISB6 = TRISB.6
#bit TRISB7 = TRISB.7


//---- DDRC Bits -----------------------------------------------------
#bit DDRC0 = DDRC.0
#bit DDRC1 = DDRC.1
#bit DDRC2 = DDRC.2
#bit DDRC6 = DDRC.6
#bit DDRC7 = DDRC.7


//---- TRISC Bits -----------------------------------------------------
#bit TRISC0 = TRISC.0
#bit TRISC1 = TRISC.1
#bit TRISC2 = TRISC.2
#bit TRISC6 = TRISC.6
#bit TRISC7 = TRISC.7


//---- OSCTUNE Bits -----------------------------------------------------
#bit TUN0   = OSCTUNE.0
#bit TUN1   = OSCTUNE.1
#bit TUN2   = OSCTUNE.2
#bit TUN3   = OSCTUNE.3
#bit TUN4   = OSCTUNE.4
#bit INTSRC = OSCTUNE.7


//---- PIE1 Bits -----------------------------------------------------
#bit TMR1IE = PIE1.0
#bit TMR2IE = PIE1.1
#bit CCP1IE = PIE1.2
#bit SSPIE  = PIE1.3
#bit TXIE   = PIE1.4
#bit RCIE   = PIE1.5
#bit ADIE   = PIE1.6


//---- PIR1 Bits -----------------------------------------------------
#bit TMR1IF = PIR1.0
#bit TMR2IF = PIR1.1
#bit CCP1IF = PIR1.2
#bit SSPIF  = PIR1.3
#bit TXIF   = PIR1.4
#bit RCIF   = PIR1.5
#bit ADIF   = PIR1.6


//---- IPR1 Bits -----------------------------------------------------
#bit TMR1IP = IPR1.0
#bit TMR2IP = IPR1.1
#bit CCP1IP = IPR1.2
#bit SSPIP  = IPR1.3
#bit TXIP   = IPR1.4
#bit RCIP   = IPR1.5
#bit ADIP   = IPR1.6


//---- PIE2 Bits -----------------------------------------------------
#bit CCP2IE = PIE2.0
#bit TMR3IE = PIE2.1
#bit HLVDIE = PIE2.2
#bit BCLIE  = PIE2.3
#bit EEIE   = PIE2.4
#bit USBIE  = PIE2.5
#bit CMIE   = PIE2.6
#bit OSCFIE = PIE2.7

#bit LVDIE  = PIE2.2  // alternate name


//---- PIR2 Bits -----------------------------------------------------
#bit CCP2IF = PIR2.0
#bit TMR3IF = PIR2.1
#bit HLVDIF = PIR2.2
#bit BCLIF  = PIR2.3
#bit EEIF   = PIR2.4
#bit USBIF  = PIR2.5
#bit CMIF   = PIR2.6
#bit OSCFIF = PIR2.7

#bit LVDIF  = PIR2.2   // alternate name


//---- IPR2 Bits -----------------------------------------------------
#bit CCP2IP = IPR2.0
#bit TMR3IP = IPR2.1
#bit HLVDIP = IPR2.2
#bit BCLIP  = IPR2.3
#bit EEIP   = IPR2.4
#bit USBIP  = IPR2.5
#bit CMIP   = IPR2.6
#bit OSCFIP = IPR2.7

#bit LVDIP  = IPR2.2   // alternate name


//---- EECON1 Bits -----------------------------------------------------
#bit RD    = EECON1.0
#bit WR    = EECON1.1
#bit WREN  = EECON1.2
#bit WRERR = EECON1.3
#bit FREE  = EECON1.4
#bit CFGS  = EECON1.6
#bit EEPGD = EECON1.7


//---- RCSTA Bits -----------------------------------------------------
#bit RX9D  = RCSTA.0
#bit OERR  = RCSTA.1
#bit FERR  = RCSTA.2
#bit ADDEN = RCSTA.3
#bit CREN  = RCSTA.4
#bit SREN  = RCSTA.5
#bit RX9   = RCSTA.6
#bit SPEN  = RCSTA.7

#bit ADEN  = RCSTA.3   // alternate name


//---- TXSTA Bits -----------------------------------------------------
#bit TX9D  = TXSTA.0
#bit TRMT  = TXSTA.1
#bit BRGH  = TXSTA.2
#bit SENDB = TXSTA.3
#bit SYNC  = TXSTA.4
#bit TXEN  = TXSTA.5
#bit TX9   = TXSTA.6
#bit CSRC  = TXSTA.7


//---- T3CON Bits -----------------------------------------------------
#bit TMR3ON  = T3CON.0
#bit TMR3CS  = T3CON.1
#bit T3SYNC  = T3CON.2
#bit T3CCP1  = T3CON.3
#bit T3CKPS0 = T3CON.4
#bit T3CKPS1 = T3CON.5
#bit T3CCP2  = T3CON.6
#bit _RD16   = T3CON.7

#bit T3NSYNC    = T3CON.2  // alternate names
#bit NOT_T3SYNC = T3CON.2


//---- CMCON Bits -----------------------------------------------------
#bit CM0   = CMCON.0
#bit CM1   = CMCON.1
#bit CM2   = CMCON.2
#bit CIS   = CMCON.3
#bit C1_INV = CMCON.4
#bit C2_INV = CMCON.5
#bit C1_OUT = CMCON.6
#bit C2_OUT = CMCON.7


//---- CVRCON Bits -----------------------------------------------------
#bit CVR0  = CVRCON.0
#bit CVR1  = CVRCON.1
#bit CVR2  = CVRCON.2
#bit CVR3  = CVRCON.3
#bit CVRSS = CVRCON.4
#bit CVRR  = CVRCON.5
#bit CVROE = CVRCON.6
#bit CVREN = CVRCON.7

#bit CVREF = CVRCON.4  // alternate name

//---- ECCP1AS Bits -----------------------------------------------------
#bit PSSAC0  = ECCP1AS.2
#bit PSSAC1  = ECCP1AS.3
#bit ECCPAS0 = ECCP1AS.4
#bit ECCPAS1 = ECCP1AS.5
#bit ECCPAS2 = ECCP1AS.6
#bit ECCPASE = ECCP1AS.7


//---- ECCP1DEL Bits -----------------------------------------------------
#bit PRSEN = ECCP1DEL.7


//---- BAUDCON Bits -----------------------------------------------------
#bit ABDEN  = BAUDCON.0
#bit WUE    = BAUDCON.1
#bit BRG16  = BAUDCON.3
#bit TXCKP  = BAUDCON.4
#bit RCIDL  = BAUDCON.6
#bit ABDOVF = BAUDCON.7

#bit RXDTP  = BAUDCON.5  // alternate names
#bit SCKP   = BAUDCON.4
#bit RCMT   = BAUDCON.6


//---- CCP2CON Bits -----------------------------------------------------
#bit CCP2M0 = CCP2CON.0
#bit CCP2M1 = CCP2CON.1
#bit CCP2M2 = CCP2CON.2
#bit CCP2M3 = CCP2CON.3
#bit DC2B0  = CCP2CON.4
#bit DC2B1  = CCP2CON.5


//---- CCP1CON Bits -----------------------------------------------------
#bit CCP1M0 = CCP1CON.0
#bit CCP1M1 = CCP1CON.1
#bit CCP1M2 = CCP1CON.2
#bit CCP1M3 = CCP1CON.3
#bit DC1B0  = CCP1CON.4
#bit DC1B1  = CCP1CON.5


//---- ADCON2 Bits -----------------------------------------------------
#bit ADCS0 = ADCON2.0
#bit ADCS1 = ADCON2.1
#bit ADCS2 = ADCON2.2
#bit ACQT0 = ADCON2.3
#bit ACQT1 = ADCON2.4
#bit ACQT2 = ADCON2.5
#bit ADFM  = ADCON2.7


//---- ADCON1 Bits -----------------------------------------------------
#bit PCFG0 = ADCON1.0
#bit PCFG1 = ADCON1.1
#bit PCFG2 = ADCON1.2
#bit PCFG3 = ADCON1.3
#bit VCFG0 = ADCON1.4
#bit VCFG1 = ADCON1.5


//---- ADCON0 Bits -----------------------------------------------------
#bit ADON     = ADCON0.0
#bit GO_DONE  = ADCON0.1
#bit CHS0     = ADCON0.2
#bit CHS1     = ADCON0.3
#bit CHS2     = ADCON0.4
#bit CHS3     = ADCON0.5

#bit DONE     = ADCON0.1  // alternate names
#bit GO       = ADCON0.1
#bit NOT_DONE = ADCON0.1


//---- SSPCON2 Bits -----------------------------------------------------
#bit SEN     = SSPCON2.0
#bit RSEN    = SSPCON2.1
#bit PEN     = SSPCON2.2
#bit RCEN    = SSPCON2.3
#bit ACKEN   = SSPCON2.4
#bit ACKDT   = SSPCON2.5
#bit ACKSTAT = SSPCON2.6
#bit GCEN    = SSPCON2.7


//---- SSPCON1 Bits -----------------------------------------------------
#bit SSPM0 = SSPCON1.0
#bit SSPM1 = SSPCON1.1
#bit SSPM2 = SSPCON1.2
#bit SSPM3 = SSPCON1.3
#bit CKP   = SSPCON1.4
#bit SSPEN = SSPCON1.5
#bit SSPOV = SSPCON1.6
#bit WCOL  = SSPCON1.7


//---- SSPSTAT Bits -----------------------------------------------------
#bit BF               = SSPSTAT.0
#bit UA               = SSPSTAT.1
#bit R_W              = SSPSTAT.2
#bit _S               = SSPSTAT.3
#bit _P               = SSPSTAT.4
#bit D_A              = SSPSTAT.5
#bit CKE              = SSPSTAT.6
#bit SMP              = SSPSTAT.7

#bit I2C_READ         = SSPSTAT.2 // Alternate names/functions
#bit I2C_START        = SSPSTAT.3
#bit I2C_STOP         = SSPSTAT.4
#bit I2C_DAT          = SSPSTAT.5

#bit NOT_W            = SSPSTAT.2
#bit NOT_A            = SSPSTAT.5

#bit NOT_WRITE        = SSPSTAT.2
#bit NOT_ADDRESS      = SSPSTAT.5

#bit READ_WRITE       = SSPSTAT.2
#bit DATA_ADDRESS     = SSPSTAT.5

#bit _R               = SSPSTAT.2
#bit _D               = SSPSTAT.5


//---- T2CON Bits -----------------------------------------------------
#bit T2CKPS0  = T2CON.0
#bit T2CKPS1  = T2CON.1
#bit TMR2ON   = T2CON.2
#bit T2OUTPS0 = T2CON.3
#bit T2OUTPS1 = T2CON.4
#bit T2OUTPS2 = T2CON.5
#bit T2OUTPS3 = T2CON.6


//---- T1CON Bits -----------------------------------------------------
#bit TMR1ON     = T1CON.0
#bit TMR1CS     = T1CON.1
#bit T1SYNC     = T1CON.2
#bit T1OSCEN    = T1CON.3
#bit T1CKPS0    = T1CON.4
#bit T1CKPS1    = T1CON.5
#bit T1RUN      = T1CON.6
#bit RD16       = T1CON.7

#bit NOT_T1SYNC = T1CON.2  // alternate name


//---- RCON Bits -----------------------------------------------------
#bit NOT_BOR  = RCON.0
#bit NOT_POR  = RCON.1
#bit NOT_PD   = RCON.2
#bit NOT_TO   = RCON.3
#bit NOT_RI   = RCON.4
#bit SBOREN   = RCON.6
#bit NOT_IPEN = RCON.7

#bit BOR      = RCON.0  // alternate names
#bit POR      = RCON.1
#bit PD       = RCON.2
#bit TO       = RCON.3
#bit RI       = RCON.4
#bit IPEN     = RCON.7


//---- WDTCON Bits -----------------------------------------------------
#bit SWDTEN = WDTCON.0

#bit SWDTE  = WDTCON.0  // alternate name


//---- HLVDCON Bits -----------------------------------------------------
#bit HLVDL0  = HLVDCON.0
#bit HLVDL1  = HLVDCON.1
#bit HLVDL2  = HLVDCON.2
#bit HLVDL3  = HLVDCON.3
#bit HLVDEN  = HLVDCON.4
#bit IRVST   = HLVDCON.5
#bit VDIRMAG = HLVDCON.7

#bit LVV0    = HLVDCON.0  // Alternate names/functions
#bit LVV1    = HLVDCON.1
#bit LVV2    = HLVDCON.2
#bit LVV3    = HLVDCON.3
#bit LVDEN   = HLVDCON.4
#bit BGST    = HLVDCON.5

#bit LVDL0   = HLVDCON.0
#bit LVDL1   = HLVDCON.1
#bit LVDL2   = HLVDCON.2
#bit LVDL3   = HLVDCON.3

#bit IVRST   = HLVDCON.5



//---- OSCCON Bits -----------------------------------------------------
#bit SCS0  = OSCCON.0
#bit SCS1  = OSCCON.1
#bit IOFS  = OSCCON.2
#bit OSTS  = OSCCON.3
#bit IRCF0 = OSCCON.4
#bit IRCF1 = OSCCON.5
#bit IRCF2 = OSCCON.6
#bit IDLEN = OSCCON.7

#bit FLTS  = OSCCON.2  // alternate name


//---- T0CON Bits -----------------------------------------------------
#bit T0PS0  = T0CON.0
#bit T0PS1  = T0CON.1
#bit T0PS2  = T0CON.2
#bit PSA    = T0CON.3
#bit T0SE   = T0CON.4
#bit T0CS   = T0CON.5
#bit T08BIT = T0CON.6
#bit TMR0ON = T0CON.7


//---- STATUS Bits -----------------------------------------------------
#bit _C           = STATUS.0
#bit _DC          = STATUS.1
#bit _Z           = STATUS.2
#bit _OV          = STATUS.3
#bit _N           = STATUS.4

#bit _CARRY       = STATUS.0  // Alternate Names
#bit _DIGIT_CARRY = STATUS.1
#bit _ZERO        = STATUS.2
#bit _OVERFLOW    = STATUS.3
#bit _NEGATIVE    = STATUS.4




//---- INTCON3 Bits -----------------------------------------------------
#bit INT1IF = INTCON3.0
#bit INT2IF = INTCON3.1
#bit INT1IE = INTCON3.3
#bit INT2IE = INTCON3.4
#bit INT1IP = INTCON3.6
#bit INT2IP = INTCON3.7

#bit INT1F  = INTCON3.0  // Alternate Names
#bit INT2F  = INTCON3.1
#bit INT1E  = INTCON3.3
#bit INT2E  = INTCON3.4
#bit INT1P  = INTCON3.6
#bit INT2P  = INTCON3.7


//---- INTCON2 Bits -----------------------------------------------------
#bit RBIP     = INTCON2.0
#bit TMR0IP   = INTCON2.2
#bit INTEDG2  = INTCON2.4
#bit INTEDG1  = INTCON2.5
#bit INTEDG0  = INTCON2.6
#bit NOT_RBPU = INTCON2.7

#bit T0IP     = INTCON2.2  // Alternate Names
#bit RBPU     = INTCON2.7


//---- INTCON Bits -----------------------------------------------------
#bit RBIF   = INTCON.0
#bit INT0IF = INTCON.1
#bit TMR0IF = INTCON.2
#bit RBIE   = INTCON.3
#bit INT0IE = INTCON.4
#bit TMR0IE = INTCON.5
#bit PEIE   = INTCON.6
#bit GIE    = INTCON.7

#bit INT0F  = INTCON.1  // Alternate Names
#bit T0IF   = INTCON.2
#bit INT0E  = INTCON.4
#bit T0IE   = INTCON.5
#bit GIEL   = INTCON.6
#bit GIEH   = INTCON.7


//---- STKPTR Bits -----------------------------------------------------
#bit STKPTR0  = STKPTR.0
#bit STKPTR1  = STKPTR.1
#bit STKPTR2  = STKPTR.2
#bit STKPTR3  = STKPTR.3
#bit STKPTR4  = STKPTR.4
#bit STKUNF   = STKPTR.6
#bit STKFUL   = STKPTR.7

//========================================================================== 
#endif __18F2550_REGS_H__
 