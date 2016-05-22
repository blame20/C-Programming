#include <stdio.h>
#include <stdlib.h>

/*
 * Write a functionthat declaresand initializes and integer on the stack, 
 * then returning it.Try creating the functionwith two different declarations:
 */

int new_integer();
int *new_integer_ptr();

int new_integer()
{
    int newInt = 5;
    return newInt;
}
int *new_integer_ptr()
{
    int *newInt = malloc(sizeof(int));
    *newInt = 5;
    return newInt;
}

int main() 
{
    printf("%d\n", new_integer());
    int *num = new_integer_ptr();
    printf("%d\n", *num);
    free(num);
    
    
    return 0;
}
// First function is on stack, second function is on heap.
// The stack is risky to write functions, better write them on the heap.

 