#include <stdio.h>
#include <stdlib.h>


//MEMSET(         )    /> #include<string.h>

int main() 
{
    char *text = malloc(3);
    if (!text)
    {
        return 1;
    }
    
    text[0] = 'A';
    text[1] = 'B';
    char *newText = realloc(text, 10);
    if (!newText)
    {
        return 1;
    }
    text = newText;
    text[2] = 'C';
    text[3] = 'D';
    text[4] = '\0';
    printf("%s\n", text );
    
    return 0;
}

