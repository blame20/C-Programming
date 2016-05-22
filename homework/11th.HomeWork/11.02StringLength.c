#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Write  a program that reads from the console  a string ofmaximum 20 characters. 
//If the length of the string is 
//less than 20, the rest of the characters should be filled withasterisks'*'.
//Print the resultingstringonthe console

int main() 
{
    char *input = NULL;
    size_t size = 0;
    getline(&input, &size, stdin);
    input[strlen(input) - 1] = '\0';
    char string[21];
    strncpy(string, input, 20);
    string[21] = '\0';
    size_t lenght = strlen(string);
    if(lenght < 20)
    {
        int count = 20 - lenght;
        char asterix[count];
        memset(asterix, '*', count);
        strncat(string, asterix, count);
    }
    
    printf("%s", string);
    free(input);
    
    return 0;
}

