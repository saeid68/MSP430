#include <msp430.h> 

#define ENABLE_RED 0xFFFE 						 // Used to enable microcontroller's pins

void main(void)
{
	unsigned short int i;
	WDTCTL = WDTPW + WDTHOLD;    // Stop watchdog timer
	PM5CTL0 = ENABLE_RED; 						 // Enables the pins to the outside world
	P1DIR = P1DIR | 0x01;        // P1.0 is an output
	while(1)
	{
		P1OUT = P1OUT ^ 0x01;    // Toggle P1.0
		for(i=0 ; i<5000 ; i++); // Delay loop
	}                            //end while(1)
}//end main()
