/*
********************************************************************
* @file          : NumbersPyramid.c
* @author        : Sameh Shata
* @brief         : Contains generation of pyramids patterns by Numbers
********************************************************************
*/

/* ******************** Include Section Start ******************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Include Section End   ******************** */

/* ******************** Global Variable Section Start ************ */
/*-----------------(is) are the iterators for rows generation-------------------*/
/*----------(js) are the iterators for numbers in one row generation------------*/ 
/*VARIABLES of half pyramid*/
unsigned int rows, i, j;
/*VARIABLES of Inverted half pyramid*/
unsigned int i2, j2, numCount = 1;
/*VARIABLES of Hollow half pyramid*/
unsigned int i3, j3;
/*VARIABLES of Special Full pyramid*/
unsigned int i4, j4, y = 1, spaces, x, counter1 = 0;
/*VARIABLES HOLLOW FULL PYRAMID*/
unsigned int i5;
unsigned int j5;
unsigned int spaces1;
/*VARIABLES OF HOLLOW INVERTED PYRAMID*/
unsigned int i6;
unsigned int j6;
unsigned int numCount2 = 1;

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
            printf("%i ",j);
        }
        printf("\n");
    }
    /*INVERTED HLAF PYRAMID*/
    printf("\nInverted Half Pyramid\n");
    for(i2 = 1; i2 <= rows; i2++)
    {
        for(j2 = rows; j2 >= i2; j2--)
        {
            printf("%i ",numCount++);
        }
        printf("\n");
        numCount = 1;
    }
    /*HOLLOW HLAF PYRAMID*/
    printf("\nHollow Half Pyramid\n");
    for(i3 = 1; i3 <= rows; i3++)
    {
        for(j3 = 1; j3 <= i3; j3++)
        {
            if((1 == i3) || (i3 == rows) || (1 == j3) || (j3 == i3))
            {
                printf("%i ",j3);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    /*SPECIAL FULL PYRAMID*/
    /*CAUTION!! ==>> THE SHAPE IS NOT SO GOOD IF THE ROWS > 5 BECAUSE 2 DIGITS NUMBERS APPEAR*/
    printf("\nSpecial Full Pyramid\n");
    for(i4 = 1; i4 <= rows; i4++)
    {
        for(spaces = 1; spaces <= (rows - i4)*2;spaces++)
        {
            printf(" ");
        }
        for(j4 = 1; j4 <= ((i4 * 2)-1); j4 += 2)
        {
            printf("%i ",y);
            y++;
            counter1++;
            if((counter1 == i4) && (i4 != 1))
            {
                for(x = (j4-1); (x <= j4) && (x >= i4);x--)
                {
                    printf("%i ",x);
                }
            }
        }
        printf("\n");
        counter1 = 0;
        y = i4 + 1;
    }
    /*HOLLOW FULL PYRAMID*/
    printf("\nHollow Full Pyramid\n");
    for(i5 = 1;i5 <= rows;i5++)
    {
        for(spaces1 = 1;spaces1 <= (rows-i5);spaces1++)
            {
                printf(" ");
            }
        for(j5 = 1;j5 <= i5;j5++)
        {
            if((1 == i5) || (i5 == rows) || (1 == j5) || (j5 == i5))
            {
                printf("%i ",j5);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    /*HOLLOW INVERTED PYRAMID*/
    printf("\nHollow Inverted Pyramid\n");
    for(i6 = 1;i6 <= rows; i6++)
    {
        numCount2 = i6;
        for(j6 = rows;j6 >= i6;j6--)
        {
            if((1 == i6) || (i6 == rows) || (j6 == i6) || (j6 == rows))
            {
                printf("%i ",numCount2);
            }
            else
            {
                printf("  ");
            }
            numCount2++;
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
Sameh         10Feb2023-02:55PM       Added Hlaf pyramid pattern
Sameh         10Feb2023-03:01PM       Added Inverted Hlaf pyramid pattern
Sameh         10Feb2023-03:07PM       Added Hollow Hlaf pyramid pattern
Sameh         10Feb2023-06:01PM       Added Special Full pyramid pattern
Sameh         10Feb2023-07:00PM       Added Hollow Full pyramid pattern
Sameh         10Feb2023-08:24PM       Added Hollow Inverted Half pyramid pattern
*/