#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) 
{
    char buffer[10];
    char *text = "Hello, taxi! - Hello, pedestrian.";
    memcpy(buffer, text, 9);
    buffer[9] = '\0';
    
    char *ch = text;
//    printf("%s", text);

    printf("%s\n", ch);
   
    return (EXIT_SUCCESS);
}

