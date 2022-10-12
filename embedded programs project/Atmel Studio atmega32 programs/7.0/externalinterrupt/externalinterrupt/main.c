#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
    DDRD=0x00;
	DDRC=0xff;
	MCUCR=0x02;
	GICR=0x40;
    while (1) 
    {
		PORTC =0xf0;
		_delay_ms(500);
		PORTC=0x00;
		_delay_ms(500);
		sei();
    }
}
ISR(INT0_vect )
{
	
	cli();
	PORTC=0x0f;
	_delay_ms(500);
	PORTC=0x00;
	sei();
}
