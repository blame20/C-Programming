#include <stdio.h>
#include <stdlib.h>

// Write an expression that extracts from given integer nthe value 
//of given bit at index p.


int main() 
{
    int n;
    int p;
    if (scanf("%d %d", &n, &p) != 2)
    {
        printf("Invalid Input");
    }
    
    int result = 1 & (n >> p);
    printf("%d", result);
    
    return 0;
}

