#include <stdio.h>
#include <stdlib.h>

//Write a program that finds the averageof the sum of 3numbers.

int main() 
{
    double a, b, c, average;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Invalid inut!");
    }
    else
    {
        average = (a + b + c) / 3;
        printf("%lf\n", average);
    }
    
    return 0;
}
