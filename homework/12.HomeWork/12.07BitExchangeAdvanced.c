#include <stdio.h>
#include <stdlib.h>

/*Write aprogram thatexchanges bits{p, p+1, ..., p+k-1}with bits
 * {q, q+1, ..., q+k-1}of a given 32-bit unsignedinteger.
 * The first and the second sequence of bits maynot overlap.
 * 
 */

unsigned int greater_number(unsigned int first, unsigned int second);
unsigned int lesser_number(unsigned int first, unsigned int second);

int main() 
{
    unsigned int n;
    int p, q, k;
    if (scanf("%u %d %d %d", &n, &p, &q, &k) != 4)
    {
        printf("Invalid input!");
        return 1;
    }
    
    if (p < 0 || q < 0 || greater_number(p, q) + k > 32)
    {
        printf("out of range");
    }
    else if (lesser_number(p, q) + k - 1 >= greater_number(p, q))
    {
        printf("overlapping");
    }
    else
    {
        unsigned int mask = (1 << k) - 1;
        unsigned int firstBits = (n & (mask << p)) >> p;
        unsigned int secondBits = (n & (mask << q)) >> q;
        n &= ~(mask << p);
        n &= ~(mask << q);
        n |= firstBits << q;
        n |= secondBits << p;
        
        printf("%u", n);
    }
    
    return 0;
}
unsigned int greater_number(unsigned int first, unsigned int second)
{
    return first > second ? first : second;
}

unsigned int lesser_number(unsigned int first, unsigned int second)
{
    return first < second ? first : second;
}
