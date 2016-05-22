#include <stdio.h>
#include <stdlib.h>

int calc();
void print();
int arr_get_index(int *array, int size, int num);



int main(int argc, char** argv) 
{
    int arr[] = { 4, 5, 1, -6, 3, 2 };
    int size = sizeof(arr) / sizeof(int);
    
    int index = arr_get_index(arr, size, 4);
    if (index == -1)
    {
        printf("Number not found.\n");
    }
    else
    {
        printf("Index is %d.", index);
    }
    return 0;
}

int arr_get_index(int *array, int size, int num)
{
    int index;
    int result;
    for(index = 0; index < size; index++)
    {
        int currentNum = array[index];
        if (currentNum == num)
        {
            return index;
        }
    }
    
    return -1;
}