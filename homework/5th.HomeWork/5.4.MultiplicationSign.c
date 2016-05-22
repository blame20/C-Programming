#include <stdio.h>
#include <stdlib.h>

//Write a program that shows the sign (+,-or 0)
//of the product of three real numbers, without calculating it. Use a 
//sequence of if operators.

int main() 
{
    double a;
    double b;
    double c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Error!");
    }
    else
    {
        if(a == 0 || b == 0 || c == 0)
        {
            printf("0");
        }
        else if (a > 0 && b > 0 && c > 0)
        {
            printf("+");
        }
        else if (a < 0 && b < 0 && c < 0)
        {
            printf("-");
        }
        else if ((a < 0 ^ b < 0) && c > 0)
        {
            printf ("-");
        }
        else if (a > 0 && (b < 0 ^ c < 0))
        {
            printf("-");
        }
        else
        {
            printf("+");
        }
    }
    
    return 0;
}

