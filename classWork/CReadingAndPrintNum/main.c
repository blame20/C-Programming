#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_SIZE 4

int main() 
{
    char *line;
    size_t size = 0;
    size_t lenght = getline(&line, &size, stdin);
    
    char *token = strtok(line, " ");
    int *array = malloc(INITIAL_SIZE * sizeof(int));
    if (!array)
    {
        return 1;
    }
    
    size_t i = 0, arrayLenght = INITIAL_SIZE;
    
    while(token)
    {
           int num = atoi(token);
           if (i == arrayLenght)
           {
           int *newArray = realloc(array, arrayLenght * 2 * sizeof(int));
           if (!newArray)
           {
               return 1;
           }
           
           array = newArray;
           arrayLenght *= 2;
           
           }
           array[i] = num;
           i++;
           token = strtok(NULL, " ");  
    }
           size_t j;
           for (j = 0; j < i; j++)
           {
           printf("%d ", array[j]);
           }
           free(line);
           free(array);
   
    return 0;
}

