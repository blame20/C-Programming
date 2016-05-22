#include <stdio.h>
#include <stdlib.h>

/*
 * Write a program thatexchanges bits3,4and5with bits24,25and26ofgiven 
 * 32-bit unsigned integer.
 */
int main() 
{
    unsigned n;
    if (scanf("%u", &n) != 1)
    {
        printf("Invalid Input");
        return 1;
    }
    unsigned int mask = 7;
    unsigned int firstBits = (n & (mask << 3)) >> 3;
    unsigned int secondBits = (n & (mask << 24)) >> 24;
    n &= ~(mask << 3);
    n &= ~(mask << 24);
    n |= firstBits << 24;
    n |= secondBits << 3;
    
    printf("%u", n);
    return 0;
}

