#include <stdio.h>
#include <stdlib.h>

//Write an expression that calculates trapezoid's area by given sides 
//a and b and height h.

int main() 
{
    double a, b, h, area;
    int matches = scanf("%lf %lf %lf", &a, &b, &h);
    if (matches != 3)
    {
        printf("Invalid format");
    }
    else
    {
        area = (a + b) / 2 * h;
        printf("%lf", area);
    }
    return 0;
}

