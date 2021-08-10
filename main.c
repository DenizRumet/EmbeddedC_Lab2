#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
DDRD &= ~0x03;
DDRB |= 0xFF;
PORTB = 0x00;

while(1)
{

    if ((PIND & _BV(PIND0)) == 0x00)
    {

        if ( PORTB<0x81 )
        {

            PORTB = PORTB + PORTB;

        }
        if ( PORTB == 0x00)
        {

            PORTB = 0x01;
            PORTB = 0x01;
            PORTB = 0x01;
            PORTB = 0x01;
        }
        else
        {
            PORTB = PORTB;



        }
    }
    if ((PIND & _BV(PIND1)) == 0x00)
    {
      if (PORTB > 0x01)
      {
          PORTB = PORTB;
          PORTB = PORTB;
          PORTB = PORTB;
          PORTB = PORTB  >>1;



      }
      else
        {
          PORTB = PORTB;
          PORTB = PORTB;
          PORTB = PORTB;
          PORTB = PORTB;
          PORTB = 0x80;

      }

    }
    else
    {
        PORTB = PORTB;
    }

};
return 0;
}


/*
PORTB = 0x80;

PORTB = 0x0F;

*/
