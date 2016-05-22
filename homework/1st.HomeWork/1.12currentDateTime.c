#include <stdio.h>
#include <stdlib.h>
#include<time.h>


//Create a console application that prints the current date and time.


int main()
{
    time_t result = time(NULL);
    printf("%s", ctime(&result));
    
    return 0;
}

