/*
********************************************************************
* @file          : HollowDiamondInRectangle.c
* @author        : Sameh Shata
* @brief         : Contains generation of Butterfly Pattern
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
    printf("Enter the number of the rows : ");
    scanf_s("%i",&rows);
    /*HOLLOW DIAMOND*/
    printf("\nButterfly Pattern Diamond\n");
    /*UPPER HALF*/
    for(i = 1;i <= rows;i++)
    {
        for(j = 1; j <= i; j++) //left triangle
        {
            printf("* ");
        }
        for(spaces = 1; spaces <= (((4*rows)-(4*i-2))-2);spaces++) //sapces
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++) //right triangle
        {
            printf("* ");
        }
        printf("\n \n");
    }
    /*BOTTOM HALF*/
    jj= rows;
    for(i = 1;i <= rows;i++)
    {
        for(j = rows; j >= i; j--) //left triangle
        {
            printf("* ");
        }
        for(spaces = 1; spaces <= (((4*rows)-(4*jj-2))-2);spaces++) //sapces
        {
            printf(" ");
        }
        for(j = rows; j >= i; j--) //right triangle
        {
            printf("* ");
        }
        printf("\n \n");
        jj--;
    }
    return 0;
}
/* ******************** Sub-Program Section End ****************** */

/*
******************************************************************************************
User            Date              Brief
******************************************************************************************
Sameh         13Feb2023-1:18PM                Added butterfly pattern
*/