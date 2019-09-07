/*
 * GccApplication2.c
 *
 * Created: 9/7/2019 10:37:41 AM
 * Author : star
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
DDRC=(1<<PC7);
DDRD=(1<<PD3);
DDRC=(1<<PC2);   
    while(1){
	/* Replace with your application code */
	
	PORTC=(1<<PC7);
	PORTD=0;
	_delay_ms(1000);
	PORTD=(1<<PD3);
	PORTC=0;
	_delay_ms(1000);
	PORTC=(1<<PC2);
	PORTD=0;
	_delay_ms(1000);
	}
}

