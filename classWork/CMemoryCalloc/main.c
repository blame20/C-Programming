
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(int argc, char** argv) 
{
   int *nums = calloc(SIZE, sizeof(int));
    int i;
    if (!nums)
    {
        printf("Not enough memory");
        return 1;
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", nums[i]);
        
    }
    free (nums);
    
    return (EXIT_SUCCESS);
}

