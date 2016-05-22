//#include <stdio.h>
//#include <stdlib.h>
//
//void printHyphens(int count)
//{
//    int i;
//    char buffer[count + 1];
//    for(i = 0; i < count; i++)
//        buffer[i] = '-';
//    buffer[count] = '\0';
//    printf("%s", buffer);
//    
//}
//
//
//int main(int argc, char** argv) 
//{
//
//    printHyphens(5);
//    
//    return (EXIT_SUCCESS);
//}

#include <stdio.h>
#include <stdlib.h>

//void printNumbers(int start, int end)
//{
//    int i;
//    for (i = start; i<= end; i++)   ///// 1
//    {
//        printf("%d\n", i);
//    }    
//}

void printSign(int number)
{
    if(number > 0)
        printf("Positive\n");
    else if (number < 0)
        printf("Negative\n");
    else
            printf("The number is zero\n");
}

int main() 
{

    printSign(-5);
//    printNumbers(10, 30);    //// 1111

    return 0;
}