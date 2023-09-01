/*
********************************************************************
* @file          : pyramid.c
* @author        : Sameh Shata
* @brief         : Contains generation of pyramids patterns by ASTERISK
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
unsigned int rows, i, j;
/*VARIABLES of inverted half pyramid*/
unsigned int ii, jj;
/*VARIABLES OF HOLLOW INVERTED HLAF PYRAMID*/
unsigned int i3, j3;
/*VARIABLES OF FULL PYRAMID*/
unsigned int i4, j4, spaces;
/*VARIABLES OF INVERTED FULL PYRAMID*/
unsigned int i5, j5, spaces1;
/*VARIABLES OF HOLLOW FULL PYRAMID*/
unsigned int i6, j6, spaces2;
/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows: ");
    scanf_s("%i",&rows);
    /*HLAF PYRAMID*/
    printf("\nHalf Pyramid\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
        printf("* ");
        }
        printf("\n");
    }

    /*INVERTED HLAF PYRAMID*/
    printf("\nInverted Half Pyramid\n");
    for(ii = 1; ii <= rows; ii++)
    {
        for(jj = rows; jj >= ii; jj--)
        {
        printf("* ");
        }
        printf("\n");
    }
    /*HOLLOW INVERTED HLAF PYRAMID*/
    printf("\nHOLLOW Inverted Half Pyramid\n");
    for(i3 = 1; i3 <= rows; i3++)
    {
        for(j3 = rows; j3 >= i3; j3--)
        {
            if((j3 == rows) || (j3 == i3) || (i3 == 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    /*FULL PYRAMID*/
    printf("\nFull Pyramid\n");
    for(i4 = 1; i4 <= rows; i4++)
    {
        for(spaces = 1; spaces <= (rows-i4);spaces++)
            {
                printf(" ");
            }
        for(j4 = 1; j4 <= i4; j4++)
        {
            printf("* ");
        }
        printf("\n");
    }
    /*INVERTED FULL PYRAMID*/
    printf("\nInverted Full Pyramid\n");
    for(i5 = 1; i5 <= rows; i5++)
    {
        for(spaces1 = 1; spaces1 <= (i5 - 1);spaces1++)
            {
                printf(" ");
            }
        for(j5 = rows; j5 >= i5; j5--)
        {
            printf("* ");
        }
        printf("\n");
    }
    /*HOLLOW FULL PYRAMID*/
    printf("\nHollow Full Pyramid\n");
    for(i6 = 1; i6 <= rows; i6++)
    {
        for(spaces2 = 1; spaces2 <= (rows-i6);spaces2++)
            {
                printf(" ");
            }
        for(j6 = 1; j6 <= i6; j6++)
        {
            if((1 == i6) || (i6 == rows) || (1 == j6) || (j6 == i6))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
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