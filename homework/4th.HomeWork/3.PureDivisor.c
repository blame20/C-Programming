#include <stdio.h>
#include <stdlib.h>

//Write a program that prints if a number is divided by 9, 11 or 13 without remainder.

int main() 
{
    int num;
    scanf("%d", &num);
    
    if (num % 9 == 0 || num % 11 == 0 || num % 13 == 0 )
    {
    printf("1");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}

