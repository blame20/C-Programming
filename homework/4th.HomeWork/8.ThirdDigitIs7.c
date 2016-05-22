#include <stdio.h>
#include <stdlib.h>

//Write an expression that checks for given integer if its third digit from right
//-to-left is 7. Print true or false:

int main() 
{
    int num, ThirdDigit;
    
    if(scanf("%d", &num) != 1)
    {
        printf("Invalid Digit");
    }
    else
    {
        ThirdDigit = (num / 100) % 10;
        printf("%s", ThirdDigit == 7 ? "true" : "false");
    }
    

    return 0;
}

