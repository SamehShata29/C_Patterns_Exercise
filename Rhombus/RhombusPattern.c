/*
********************************************************************
* @file          : Diamond.c
* @author        : Sameh Shata
* @brief         : Contains generation of Rhombus Pattern
********************************************************************
*/

/* ******************** Include Section Start ******************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Include Section End   ******************** */

/* ******************** Global Variable Section Start ************ */
/*-----------------(is) are the iterators for rows generation-------------------*/
/*--------------(js) are the iterators for coloumns generation------------------*/ 
/*VARIABLES of Diagonal & Sides of a Rhombus/Diamond*/
unsigned int rows, i, j, spaces;

/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows: ");
    scanf_s("%i",&rows);
    /*Rhombus*/
    printf("Rhombus \n");
    for(i = 1; i <= rows;i++)
    {
        for(spaces = rows; spaces > i; spaces--)
        {
            printf(" ");
        }
        for(j = 1; j <= rows;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    /*Hollow Rhombus*/
    printf("Hollow Rhombus \n");
    for(i = 1; i <= rows;i++)
    {
        for(spaces = rows; spaces > i; spaces--)
        {
            printf(" ");
        }
        for(j = 1; j <= rows;j++)
        {
            if((j == 1) || (j == rows) || (i == 1) || (i == rows))
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
    return 0;
}
/* ******************** Sub-Program Section End ****************** */

/*
******************************************************************************************
User            Date                          Brief
******************************************************************************************
Sameh         13Feb2023-6:20PM                Added Rhombus Pattern

*/