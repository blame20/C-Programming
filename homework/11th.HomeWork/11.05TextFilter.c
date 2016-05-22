#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    char *banWords = NULL;
    size_t size = 0;
    int banLenght = getline(&banWords, &size, stdin);
    banWords[banLenght -1] = '\0';
    
    char *text = NULL;
    int textLenght = getline(&text, &size, stdin);
    text[textLenght -1] = '\0';
    
    char *token = strtok(banWords, ", ");
    while(token)
    {
       size_t lenght = strlen(token);
       char *substr = strstr(text, token);
       while (substr)
       {
           int index = substr - text;
           memset(&text[index], '*', lenght);
           substr = strstr(&(*(substr + 1)), token);
           
       }
       token = strtok(NULL, ", ");
    }
    printf("\n%s\n", text);
    free(banWords);
    free(text);
    
    return 0;
}

