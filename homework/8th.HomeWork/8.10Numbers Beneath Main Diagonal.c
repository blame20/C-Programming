#include <stdio.h>
#include <stdlib.h>

/*
 * You are given a matrix of numbers. Your task is to print out the numbers, 
 * one group at a line, which are stationed beneath the matrix’s main 
 * diagonal along with the diagonal itself. On the first input line, you are 
 * given the matrix’s rows and cols count.
 */

void fill_matrix(int rows, int cols, int matrix[][cols]);

int main() 
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!");
        return 1;
    }
    int matrix[n][n];
    fill_matrix(n, n, matrix);
    int i, r;
    printf("\n");
    for (i = 0; i < n; i ++)
    {
        for (r = 0; r <= i; r++)
        {
            printf("%-3d", matrix[i][r]);
        }
        
        printf("\n");
    }
    
    return 0;
}

void fill_matrix(int rows, int cols, int matrix[][cols])
{
    int i, r;
    for (i = 0; i < rows; i++)
    {
        for (r = 0; r < cols; r++)
        {
            scanf("%d", &matrix[i][r]);
        }
    }
}
