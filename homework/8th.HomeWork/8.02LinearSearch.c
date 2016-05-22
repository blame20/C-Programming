#include <stdio.h>
#include <stdlib.h>

//Given an array of n integers, write a linear search function 
//that determines whether a given element exists in the array.
//On the first line you will receive the number n. On the second line, there 
//will be n numbers, space-separated. 
//On the third line, the search number will be given.

int linear_search(int*, int, int);

int main() 
{
   int array[100], search, i, n, position;
 
      scanf("%d", &n);
 
   for ( i = 0 ; i < n ; i++ )
      scanf("%d",&array[i]);
 
      scanf("%d",&search);
 
   position = linear_search(array, n, search);
 
   if ( position == -1 )
      printf("No\n", search);
   else
      printf("Yes\n", search, position+1);
 
    
    return 0;
}
int linear_search(int *pointer, int n, int find)
{
   int i;
 
   for ( i = 0 ; i < n ; i++ )
   {
      if ( *(pointer+i) == find )
         return i;
   }
 
   return -1;
}
