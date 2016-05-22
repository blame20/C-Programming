#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(int *first, int *second);


/*
 * Implement a function which takes as inputtwo numbersandswapstheirvalues. 
 * The declaration of the functionshould be something like:
 */
int main() 
{
    int firstNum, secondNum;
    if (scanf("%d %d", &firstNum, &secondNum) != 2)
    {
        printf("Error");
        return 1;
    }
    printf("Before swapping: %d %d\n", firstNum, secondNum);
    swap(&firstNum, &secondNum);
    printf("After swapping: %d %d\n", firstNum, secondNum);
    
    return 0;
}

void swap(int *first, int *second)
{
        int oldNum;
        oldNum = *first;
        *first = *second;
        *second = oldNum;
}