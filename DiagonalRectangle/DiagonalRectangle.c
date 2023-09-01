/*
********************************************************************
* @file          : HollowDiamondInRectangle.c
* @author        : Sameh Shata
* @brief         : Contains generation of Diagonal & Sides of a Rectangle
********************************************************************
*/

/* ******************** Include Section Start ******************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Include Section End   ******************** */

/* ******************** Global Variable Section Start ************ */
/*-----------------(is) are the iterators for rows generation-------------------*/
/*--------------(js) are the iterators for coloumns generation------------------*/ 
/*VARIABLES of Hollow Diamond*/
unsigned int rows,i, j, spaces, jj;

/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows should be odd : ");
    scanf_s("%i",&rows);
    /*nButterfly Pattern*/
    if((rows % 2 != 0))
    {
        printf("\nDiagonal & Sides of a Rectangle\n");
        for(i = 1;i <= rows;i++)
        {
            for(j = 1; j <= rows;j++)
            {
                if((j == 1) || (j == i) || (j == rows) || (i == rows) || (i == 1) || ((i+j) == (rows+1)))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        printf("\n");
        }
    }
    else
    {
        printf("invalid input please enter an odd number");
    }
    return 0;
}
/* ******************** Sub-Program Section End ****************** */

/*
******************************************************************************************
User            Date              Brief
******************************************************************************************
Sameh         13Feb2023-1:18PM                Added Diagonal & Sides of a Rectangle
*/