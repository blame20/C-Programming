#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main() 
{
    
 int number;
    
    scanf("%d", &number);
    
    bool isDevided = number % 5 == 0 && number % 7 == 0 ;
    
    
    printf("%d", isDevided);
    
    
    
    
    return 0;
}

