#include <xc.h>
#pragma config ICS = PGD3              // ICD Communication Channel Select bits (Communicate on PGC3 and PGD3)
volatile uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   volatile uint8_t a = 0x05;
   TMR1 = a;
   m = TMR1;
   volatile uint8_t c = 0x1F;
   PR1 = c;
   volatile uint8_t b =0x08;
   TMR2= b;
   volatile uint8_t t = add(a,b,c);
   PR2 = t;
   return;
}
