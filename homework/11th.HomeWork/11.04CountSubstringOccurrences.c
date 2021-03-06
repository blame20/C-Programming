#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void string_name(char *str);


int main()
{
    char *input = NULL;
    char *searchedWord = NULL;
    size_t occurrencesCount = 0, size = 0;
    int inputLength = getline(&input, &size, stdin);
    input[inputLength - 1] = '\0';
    string_name(input);
    
    int searchedLength = getline(&searchedWord, &size, stdin);
    searchedWord[searchedLength - 1] = '\0';
    string_name(searchedWord);
    
    char *substr = strstr(input, searchedWord);
    while (substr)
    {
        occurrencesCount++;
        substr = strstr(&(*(substr + 1)), searchedWord);
    }
    
    printf("%u", occurrencesCount);
    free(input);
    free(searchedWord);
    
    return 0;
}

void string_name(char *str)
{
    size_t length = strlen(str);
    int i;
    for (i = 0; i < length; i++)
    {
        str[i] = tolower(str[i]);
    }
}