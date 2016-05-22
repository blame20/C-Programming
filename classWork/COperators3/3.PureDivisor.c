#include <stdio.h>
#include <stdlib.h>

//Write a program that prints if a number is dividedby 9, 11 or 13 
//without remainder

int main() 
{
      int a;
    scanf("%d", &a);
    if (a % 9 == 0 || a % 11 == 0  || a % 13 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}
    

