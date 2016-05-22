#include <stdio.h>
#include <stdlib.h>

//Write a Boolean expression that checks for given integer if it can be divided
//(without remainder) by 7and 5 in the same time

int main() 
{
    int num;
    
    scanf("%d", &num);
    
    if (num != 0 && num % 7 == 0 && num % 5 == 0)
      
    {
        printf("1");
    }
    else
    {
        printf("0");    
    }
    
    return 0;
}

