#include <stdio.h>
#include <stdlib.h>


int main() 
{
    float a;
    float b;
    float c;
    
    printf("First number is:");
    scanf("%f", &a);
    printf("Second number is:");
    scanf("%f", &b);
    printf("Third number is:");
    scanf("%f", &c);
    
    
    printf("Sum = %.2f",a+b+c);
    
    
    return 0;
}

