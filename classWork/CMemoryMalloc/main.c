#include <stdio.h>
#include <stdlib.h>

/*
 * MEMSET(         )    /> #include<string.h>
 */
int main(int argc, char** argv) 
{
    char *text = malloc(10);
    if (text)
    {
        text[0] = '\0';
        
        printf("%d", strlen(text));
        free(text);
    }
    
    
    return (EXIT_SUCCESS);
}

