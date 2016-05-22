#include <stdio.h>
#include <stdlib.h>

//Write a program that sets the bit atpositionpto0. Print the resulting number.

int main() 
{
    int n;
    int p;
    if (scanf("%d %d", &n, &p) != 2)
    {
        printf("Indalid Input");
        return 1;
    }
    
    int result = n &(~(1 << p));
    printf("%d", result);
    
    return 0;
}

