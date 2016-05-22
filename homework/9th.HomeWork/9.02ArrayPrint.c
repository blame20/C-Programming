#include <stdio.h>
#include <stdlib.h>

/*
 * Declare an arrayof integersand print it on the console.
 *  DoNOTusethe indexer operator[].
 */
int main() 
{
    int Num[] = { 4, 7, -2, 1, -5 };
    size_t size = sizeof(Num) / sizeof(int);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(Num + i));
    }
    
    return 0;
}

