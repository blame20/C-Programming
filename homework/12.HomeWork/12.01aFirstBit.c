#include <stdio.h>
#include <stdlib.h>

// Write a program that prints thebitatposition1of a number.

int main() 
{
    int n;
    if (scanf("%d", &n) !=1)
    {
        printf("Invalid input");
        return 1;
    }
    
    int result = 1 & (n >> 1);
    printf("%d", result);
    
    return 0;
}

