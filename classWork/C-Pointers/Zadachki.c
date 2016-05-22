#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int a = 5;
    int *ptr = &a;
    int *ptrPtr = ptr;
    a++;
   printf("%d", *ptr);
   
//   printf("%d", sizeof(int*)); 
//   printf("%d", sizeof(char*)); 
//   printf("%d", sizeof(float*)); 
//   printf("%d", sizeof(double*)); 
   
//   char ch = '+';
//   char *ptr = &ch;
//   printf("%c", *ptr);
   
//    char *name = "Pesho";
//    int lenght = strlen(name);
//    char letter1 = *name;
//    char letter2 = *(name + 1); // zaduljitelno skobite
//    char letter3 = *(name + 2); // zaduljitelno skobite
//    printf("%c%c%c", letter1, letter2, letter3);
    
    
//    int array[] = { 5, 3, 2 };
//   int result = *(array + 1);
//    char *charPtr = array;
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", *(array + i));
//    }
    
    
//    int arr[] = { 5, 2, 1, 3 };
//    int lenght = sizeof(arr) / sizeof(int);
//    int i;
//    for  (i = 0; i < lenght; i++)
//    {
//        printf ("%d ", *(arr + i));
//    }
    
    
    
    return 0;
}

