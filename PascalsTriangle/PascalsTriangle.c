/*
********************************************************************
* @file          : PascalsTriangle.c
* @author        : Sameh Shata
* @brief         : Contains generation of Pascal's Triangle patterns
********************************************************************
*/

/* ******************** Include Section Start ******************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Include Section End   ******************** */

/*FUNCTIOS DECLERATOIN FOR COMBINATION AND FACTORIAL EVALUATION START*/
unsigned int nCr(unsigned int n, unsigned int r);
unsigned int factorial(unsigned int m);
/*FUNCTIOS DECLERATOIN FOR COMBINATION AND FACTORIAL EVALUATION END*/
/* ******************** Global Variable Section Start ************ */
/*-----------------(is) are the iterators for rows generation-------------------*/
/*--------------(js) are the iterators for coloumns generation------------------*/ 
/*VARIABLES of Pascal's Triangle*/
unsigned int rows, i, j, spaces;
/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows: ");
    scanf_s("%i",&rows);
    /*Pascal's Triangle*/
    printf("\nPascal's Triangle\n");
    for(i = 0; i <= rows; i++)
    {
        for(spaces = 1; spaces <= (rows - i); spaces++)
            {
                printf(" ");
            }
        for(j = 0; j <= i; j++)
        {
            printf("%i ",nCr(i,j));
        }
        printf("\n");
    }
    return 0;
}
/* ******************** Sub-Program Section End ****************** */
/*FUNCTIOS DEFINITION FOR COMBINATION AND FACTORIAL EVALUATION START*/
unsigned int factorial(unsigned int m)
{
    unsigned int b, fact= 1;
    for(b = 1; b <= m;b++)
    {
        fact *= b;
    }
    return fact;
}
unsigned int nCr(unsigned int n, unsigned int r) /*[nCr = n!/r!(n-r)!]*/
{   
    unsigned int comb;
    comb = (factorial(n)/(factorial(r)*factorial(n-r)));
    return comb;
}
/*FUNCTIOS DEFINITION FOR COMBINATION AND FACTORIAL EVALUATION END*/



/*
******************************************************************************************
User            Date              Brief
******************************************************************************************
Sameh         12Feb2023-10:12PM   Pascal Triangle
*/