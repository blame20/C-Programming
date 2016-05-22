#include <stdio.h>
#include <stdlib.h>

//Write a program that prints the first 10 members of the sequence:
//2, -3, 4, -5, 6, -7, ...

int main()
{
    int a;

        scanf("%d", &a);
{
    int i;
        for (i = 2; i <= a+1; i++) 
        {
            if  (i% 2 == 0)
            {
                printf("%d ", i );
            }
            else 
            {
                printf("%d ", -i );
            }
          }
         }
return 0;
       }

