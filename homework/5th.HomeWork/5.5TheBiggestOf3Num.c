#include <stdio.h>
#include <stdlib.h>

//Write a programthat finds thebiggest of three numbers.

int main() 
{
    double a;
    double b;
    double c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Error");
    }
    else
    {
        if (a > b && a > c)
        {
            printf("%lf",a);
        }
        else if (a < b && a > c)
        {
            printf("%lf",b);
        }
        else
        {
            printf("%lf",c);
        }
    
    }
    
    return 0;
}

