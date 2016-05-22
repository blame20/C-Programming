#include <stdio.h>
#include <stdlib.h>

// Write a program that takes as input a four-digit number in format abcd 
// (e.g. 2011) and performs the following:
// Calculates the sum of the digits (in our example 2+0+1+1 = 4).
// Prints on the console the number in reversed order: 
// dcba (in our example 1102).
// Puts the last digit in the first position: dabc (in our example 1201).
// Exchanges the second and the third digits: acbd (in our example 2101).
// The number has always exactly 4 digits and cannot start with 0.

int main() 
{
    int Num, a, b, c, d, sum, reversed, lastFirst, secondThird;
    if (scanf("%d", &Num) != 1)
    {
        printf("Invalid input!");
    }
    else
    {
        d = Num % 10;
        c = (Num / 10) % 10;
        b = (Num / 100) % 10;
        a = (Num / 1000) % 10;
        
        sum = a + b + c + d;
        reversed = (d * 1000) + (c * 100) + (b * 10) + a;
        lastFirst = (d * 1000) + (a * 100) + (b * 10) + c;
        secondThird = (a * 1000) + (c * 100) + (b * 10) + d;
        
        printf("sum: %d\n", sum);
        printf("reversed: %d\n", reversed);
        printf("last digit in front: %d\n", lastFirst);
        printf("second and third digit exchanged: %d\n", secondThird);
    }
    
    
    return 0;
}

