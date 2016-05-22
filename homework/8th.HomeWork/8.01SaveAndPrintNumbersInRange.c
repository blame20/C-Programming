#include <stdio.h>
#include <stdlib.h>

//Write a program that reads n numbers from the console and saves them in an array.
//The program should then print the elements of the array on the console.

int main() 
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int i;
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }
  
  
    return 0;
}

