#include <stdio.h>
#include <stdlib.h>

//We are givenaninteger numbern,a bitvaluev(v=0or1) and a positionp. 
//Write asequence of operators(a fewlines of C# code)that modifiesnto 
//hold the valuevat the positionpfrom the binary representation 
//ofnwhilepreserving all other bits inn.

int main() 
{
    int n;
    int p;
    int v;
    if (scanf("%d %d %d", &n, &p, &v) != 3)
    {
        printf("Invalid Input");
        return 1;
    }
    
    int result;
    if (v == 0)
    {
        result = n & (~(1 << p));
    }
    else
    {
        result = n | (1 << p);
    }
    printf ("%d", result);
    
    return 0;
}

