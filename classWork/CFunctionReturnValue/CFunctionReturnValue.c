#include <stdio.h>
#include <stdlib.h>

int PlusOne(int n)
{
    n++;
    return n;
}

double calcTriangleArea(double a, double ha)
{
    double area = a * ha / 2;
    return area;
}

double power(double n, int p)
{
    int i;
    double result = 1;
    for (i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

char getSign(int num)
{
    if (num >= 0)
    {
        return '+';
    }
    else
    {
        return '-';
    }
}

int main(int argc, char** argv) 
{

    int result = PlusOne(5);
    printf("%d\n", result);
    
    double a, ha;
    scanf("%lf %lf", &a, &ha);
    double area = calcTriangleArea(a, ha);
     
    printf("Area: %.2f", area);
    
    printf("\n%.2f\n", power(10, 3));
    
  
    return (EXIT_SUCCESS);
}

