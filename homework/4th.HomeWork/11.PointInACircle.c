#include <stdio.h>
#include <stdlib.h>

//  Write an expression that checks if given point (x, y) is inside
//  a circle K({0, 0}, 2).

int main() 
{
    double x, y;
    const char R = 2;
    if (scanf("%lf %lf", &x, &y) != 2)
    {
        printf("Invalid input!");
    }
    else
    {
        int inside = (x * x) + (y * y) <= R * R;
        printf("inside: %s", inside ? "Yes" : "No");
    }
    
    return 0;
    
}

