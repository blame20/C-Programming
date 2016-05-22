#include <stdio.h>
#include <stdlib.h>


int main() 
{

    float radius;
    float Pi = 3.1415;
    printf("Please enter the radius:\n");
    scanf("%f", &radius);
   
    float perimeter = Pi*radius*2;
    
    float area = Pi*radius*radius;
    
    
    printf("The perimeter is: %.2f\nThe area is: %.2f\n ", perimeter, area);
    
    
    return 0;
}

