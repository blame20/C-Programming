#include <stdio.h>
#include <stdlib.h>

//Write a program that enters 3 real numbers and prints them sorted 
//in descending order. Use nested if statements.Don’t use arrays and the built
//-in sorting functionality.

int main() 
{

    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Invalid input!");
    }
    else
    {
        if (a > b && a > c)
        {
            if (b > c)
            {
                printf("%lf %lf %lf", a, b, c);
            }
            else
            {
                printf("%lf %lf %lf", a, c, b);
            }
        }
        else if (a < b && b > c)
        {
            if (a > c)
            {
                printf("%lf %lf %lf", b, a, c);
            }
            else
            {
                printf("%lf %lf %lf", b, c, a);
            }
        }
        else
        {
            if (a > b)
            {
                printf("%lf %lf %lf", c, a, b);
            }
            else
            {
                printf("%lf %lf %lf", c, b, a);
            }
        }
    }
    return 0;
}
