#include <stdio.h>
#include <stdlib.h>

//Write a program that applies bonus scoreto given score in the range [1...9] 
//by the following rules:
//
//If the score is between 1 and 3, the program multiplies it by 10.
//If the score is between 4 and 6, the program multiplies it by 100.
//If the score is between 7 and 9, the program multiplies it by 1000.
//If the score is 0 or more than 9, the program prints “invalid score”


int main() 
{
    int a;
    scanf("%d", &a);
    if (a <= 0 || a >= 10)
    {
        printf("Invalid score");
    
    }
    if (a >= 1 && a <= 3)
    {
        printf("%d", a*10);
    }
    else if (a >= 4 && a <=6)
    {
        printf("%d", a*100);
    }
    else if (a >= 7 && a <=9)
    {
        printf("%d", a*1000);
    }
    
    return 0;
}

