/*
 * BT_DIODA.c
 *
 * Created: 2014-04-02 16:05:45
 *  Author: Michal
 */ 


#include <avr/io.h>

int main(void)
{
	DDRB=0xff;
	
    while(1)
    {
		unsigned char uart_receive(void)
		{
			while ( !(UCSRA & (1<<RXC)) )
			;
			return UDR;
		}
		
       switch (UDR) 
	   {
	       case '0':
	       PINC=0x00;
	       break;
	       case '1':
	       PINC=0xff;
	       break;
	   }
    }
}