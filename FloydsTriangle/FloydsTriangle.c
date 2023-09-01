/*
********************************************************************
* @file          : pyramid.c
* @author        : Sameh Shata
* @brief         : Contains generation of Floyd's Triangle patterns
********************************************************************
*/

/* ******************** Include Section Start ******************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Include Section End   ******************** */

/* ******************** Global Variable Section Start ************ */
/*-----------------(is) are the iterators for rows generation-------------------*/
/*--------------(js) are the iterators for coloumns generation------------------*/ 
/*VARIABLES of half pyramid*/
unsigned int rows, i, j, count = 1;
/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows: ");
    scanf_s("%i",&rows);
    /*HLAF PYRAMID*/
    printf("\nFloyd's Triangle\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
        printf("%i ",count);
        count++;
        }
        printf("\n");
    }
    return 0;
}
/* ******************** Sub-Program Section End ****************** */

/*
******************************************************************************************
User            Date              Brief
******************************************************************************************
Sameh         9Feb2023                Task-1 Added Hlaf pyramid pattern
Sameh         9Feb2023                Task-1 Added Inverted Hlaf pyramid pattern
Sameh         9Feb2023                Task-1 Added Hollow Inverted Hlaf pyramid pattern
Sameh         9Feb2023                Task-1 Added Full pyramid pattern
Sameh         10Feb2023-02:28PM       Task-2 Added Inverted Full pyramid pattern
Sameh         10Feb2023-02:36PM       Task-2 Added Hollow Full pyramid pattern
*/