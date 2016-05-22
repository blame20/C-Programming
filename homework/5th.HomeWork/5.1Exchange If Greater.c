#include <stdio.h>
#include <stdlib.h>

//Write an if-statement that takes two integer variables a and b and exchanges
//their values if the first one is greater than the second one.
//As a result print the values a and b, separated by a space.

int main() 
{
float a;
float b;
float c;
printf("Enter two numbers:\n");

scanf("%f", &a);
scanf("%f", &b);

if( a > b ) 
{
    c = a;
    a = b;
    b = c;
    
    printf("a = %.1f b = %.1f", a, b);
}
else 
{
    printf("a = %.1f b = %.1f", a, b);
}

return 0;
       
}

