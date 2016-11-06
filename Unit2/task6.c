#include <stdio.h>
#include <stdint.h>

uint32_t BCDadd(uint32_t a,uint32_t b)
{
    uint32_t  t1, t2;    // unsigned 32-bit intermediate values

    t1 = a + 0x06666666;
    t2 = t1 ^ b;                   // sum without carry propagation
    t1 = t1 + b;                   // provisional sum
    t2 = t1 ^ t2;                  // all the binary carry bits
    t2 = ~t2 & 0x11111110;         // just the BCD carry bits
    t2 = (t2 >> 2) | (t2 >> 3);    // correction
    return t1 - t2;                // corrected BCD sum
}

void main(){

	printf("%d\n", BCDadd(10, 12));

}