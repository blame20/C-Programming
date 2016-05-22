#include <stdio.h>
#include <stdlib.h>

void printTriangle(int n)
{
    int col, row;
    for (row = 1; row <= n; row++)
    {
      for (col = 1; col <= row; col++)
     {
         printf("%d ", col);
     }
    
     printf ("\n");
    }
    
    for (row = n - 1; row >= 1; row--)
    {
      for (col = 1; col <= row; col++)
     {
         printf("%d ", col);
     }
    
     printf ("\n");
    }
}
    

int main(int argc, char** argv) 
{

    printTriangle(6);
    
    return (EXIT_SUCCESS);
}

