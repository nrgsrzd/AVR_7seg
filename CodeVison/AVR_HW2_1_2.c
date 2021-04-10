/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 4/10/2021
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 1.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32.h>
#include <delay.h>
// Declare your global variables here

char a[4] = {0x01, 0x02,  0x0C, 0x08};
//char n[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x98};
int b[4];
int i =0;
int Number = 1400;
void main(void)
{
// Declare your local variables here
DDRC = 0xFF;
DDRD = 0xFF;
PORTC = 0xFF;
PORTD = 0xFF;

b[3] = Number%10;
b[2] = (Number/10)%10;
b[1] = (Number/100)%10;
b[0] = (Number/1000)%10;
while (1)
      {
      // Place your code here
  //    PORTC = 0b11000000;  
      for(i=0;i<4;i++){   
            
            PORTD = a[i];   
            PORTC = b[i];
            delay_ms(10);
      }
      }
}

