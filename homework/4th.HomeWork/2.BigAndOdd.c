#include <stdio.h>
#include <stdlib.h>

//Write a program that that prints if the number is both greater than 20 and odd.

int main() 
{
    int num;
    scanf("%d", &num);
    
    if (num % 2 && num > 20)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
        
    return 0;
}

