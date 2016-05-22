#include <stdio.h>
#include <stdlib.h>

//Write aBoolean expressionthat returns if thebit at positionp(counting from0, 
//starting from the right)in giveninteger numbernhas value of1

int main() 
{
    int n;
    int p;
    if (scanf("%d %d", &n, &p) != 2)
    {
        printf("Invalid Input");
        return 1;
    }
    
    int result = 1 & (n >> p);
    printf(result == 1 ? "true" : "false");
    
    return 0;
}

