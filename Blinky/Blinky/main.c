/*
 * Blinky.c
 *
 * Created: 10/05/2016 18:53:51
 * Author : Ben 
  */ 


#define F_CPU 20000000UL// clock freuquentie of the chip we use 

#include <avr/io.h>
#include <util/delay.h>

//function definition 
void blink (void);



// Pin 13 on arduino Board 
#define  LED PD7





// easy code to write to a pin  
#define output_low(port,pin) port &= ~(1<<pin)
#define output_high(port,pin) port |= (1<<pin)

// easy code for the direction of the pin
#define set_input(portdir,pin) portdir &= ~(1<<pin)
#define set_output(portdir,pin) portdir |= (1<<pin)



int main(void)
{
    set_output(DDRD,LED);
	
    while (1) 
    {
		blink ();
		
    }
	return 0 ;
}


void blink(void)
{
	output_high(PORTD,LED);// 
	_delay_ms(200);
	output_low(PORTD,LED);
	_delay_ms(200);
	
}

