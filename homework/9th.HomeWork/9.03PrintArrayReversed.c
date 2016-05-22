#include <stdio.h>
#include <stdlib.h>

/*
 * You are given a sample array as input and your task is to print the array 
 * in reversed order usingpointer arithmeticinstead of indexing
 */
int main() 
{
    int n;
    if (scanf("%d ", &n) !=1)
    {
        printf("Error");
        return 1;
    }
    int i;
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
        
    }
    return 0;
}

