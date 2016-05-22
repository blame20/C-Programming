#include <stdio.h>
#include <stdlib.h>


int main() 
{
    char *FORMAT = "|%-10X|%s|%10.2f|%-10.3f|\n"
    int numberOne ;
    float numberTwo ;
    float numberThree ;  
    
     int  c, k;
    
  printf("Please enter number a:");   
  scanf(" %d", &numberOne);
  printf("Please enter number b:");
  scanf("%f", &numberTwo);
  printf("Please enter number c:");
  scanf("%f", &numberThree);
     int n = numberOne;
 
     char buffer[11];
     int index = 0;
     for (c = 9; c >= 0; c--, index++)
  {
    k = n >> c;
 
     if (k & 1)
      buffer[index] = '1';
     else
      buffer[index] = '0';
  }
      buffer[10] = '\0';
 
printf("\n");
     
printf(FORMAT,numberOne,buffer,numberTwo,numberThree);
  
    
    
    
    return 0;
}

