#include <stdio.h>
#include <stdlib.h>

/*
 *     MEMSET(         )    /> #include<string.h>
 */
int main(int argc, char** argv) 
{
    char *text = malloc(100);
    if (text)
    {
        int i, index = 0;
        for (i = 65; i<= 90; i++, index++)
        {
            text[index] = i;
        }
        text[index] = '\0';
        printf("%s", text);
        
        free(text);
        
    }
    
    return (EXIT_SUCCESS);
}

