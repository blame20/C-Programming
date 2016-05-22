#include <stdio.h>
#include <stdlib.h>

void print_address(int number);

/*
 * Write a function which takes as input an integer and prints the address 
 * of it in the memory.Try printing the address of the integer in the function 
 * and in the main function.
 *  What is the difference and why?
 */

int main() 
{
    int Num = 5;
    printf("%p\n", &Num);
    print_address(Num);
    
    return 0;
}

void print_address(int number)
{
    printf("%p\n", &number);
}