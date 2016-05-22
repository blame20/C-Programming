
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
 * Classical play cards use the following signs to designate the card face: 
2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K and A. Write a 
 * program that enters a string and prints “yes” if it is a valid card sign or “
no” otherwise
.
 */
int main() 
{
    char card[3];
           
    printf("Please enter the card:\n");
    
    scanf("%2s",card);
    

    int isSpecialSimbol= card[0] == '2' || card[0] == '3' 
    || card[0] == '4' || card[0] == '5' || card[0] == '6' || card[0] == '7' 
    || card[0] == '8' || card[0] == '9' || card[0] == 'J' || card[0] == 'Q' 
    ||card[0] == 'K' ||card[0] == 'A';
    int isTen = (card[0]== '1' && card[1] == '0' );
    
     if ( isTen || isSpecialSimbol )
        {
         printf("yes");
        }
    else
    {
        printf("no");
    }
    return (EXIT_SUCCESS);
}
