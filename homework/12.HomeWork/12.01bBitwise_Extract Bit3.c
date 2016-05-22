#include <stdio.h>
#include <stdlib.h>

// Using bitwise operators, write anexpressionfor findingthe value ofthe bit#3
//of a givenunsignedinteger. The bitsare counted from right to left, starting 
//from bit #0.The result of the expression should be either1or0

int main() 
{
    unsigned int n;
    if (scanf("%u", &n) !=1)
    {
        printf("Invalid Input");
        return 1;
    }
    
    unsigned int result = 1 & (n >> 3);
    printf("%u", result);
    
    return 0;
}

