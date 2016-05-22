#include <stdio.h>
#include <stdlib.h>

//Write a program that finds the biggest of five numbersby using only five 
//if statements.

int main() 
{
    double a, b, c, d, e;
    if (scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e) != 5)
    {
        printf("Error");
    }
    else
    {
        if ( a > b && a > c && a > d && a > e)
        {
            printf("%lf", a);
        }
        else if (a < b && b > c && b > d && b > e)
        {
            printf("%lf", b);
        }
        else if (a < b && b < c && c > d && c > e)
        {
            printf("%lf", c);
        }
        else if (a < b && b < c && c < d && d > e)
        {
            printf("%lf", d);
        }
        else
        {
            printf("%lf", e);
        }
            
    }
    
    return 0;
}

