/*
********************************************************************
* @file          : PalindromePyramid.c
* @author        : Sameh Shata
* @brief         : Contains generation of Palindrome Pyramids
********************************************************************
*/

/* ******************** Include Section Start ******************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Include Section End   ******************** */

/* ******************** Global Variable Section Start ************ */
/*-----------------(is) are the iterators for rows generation-------------------*/
/*--------------(js) are the iterators for coloumns generation------------------*/ 
/*VARIABLES of half pyramid by numbers*/
unsigned int rows, i, j, x;
/*VARIABLES of half pyramid by letters*/
unsigned int ii, jj, xx;
/*VARIABLES of Full pyramid by numbers*/
unsigned int i3, j3, x3, spaces3;
/*VARIABLES of full pyramid contains numbers and asterisks*/
unsigned int i4, j4, x4, asterisks, counter1;
/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows: ");
    scanf_s("%i",&rows);
    /*HLAF PYRAMID BY NUMBERS*/
    printf("\nHalf Pyramid by numbers\n");
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
        printf("%i ",j);
        if(i == j)
        {
            x = j-1;
        }
        while (x >= 1)
        {
            printf("%i ", x);
            x--;
        }
        }
        printf("\n");
    }
    /*HLAF PYRAMID BY LETTERS*/
    printf("\nHalf Pyramid by letters\n");
    for(ii = 1; ii <= rows; ii++)
    {
        for(jj = 1; jj <= ii; jj++)
        {
            printf("%c ",(jj+64)); /*The letter A equals to int [65] in ASCII code*/
            if(ii == jj)
            {
                xx = jj-1;
            }
            while (xx >= 1)
            {
                printf("%c ", (xx+64));
                xx--;
            }
        }
        printf("\n");
    }
    /*FULL PYRAMID BY NUMBERS*/
    printf("\nFull Pyramid by numbers\n");
    for(i3 = 1; i3 <= rows; i3++)
    {
        for(spaces3 = 1;spaces3 <= (rows-i3)*2;spaces3++)
        {
            printf(" ");
        }
        for(j3 = 1; j3 <= i3; j3++)
        {
            printf("%i ",j3);
            if(i3 == j3)
            {
                x3 = j3-1;
            }
            while (x3 >= 1)
            {
                printf("%i ", x3);
                x3--;
            }
        }
        printf("\n");
    }
    printf("\nFull Pyramid by numbers and asterisks\n");
    if(rows <= 8)
    {
        for(i4 = 1;i4 <= rows; i4++)
        {
            /*left side asterisks*/
            for(asterisks = 1; asterisks <= ((17-((2*i4)-1))/2);asterisks++)
            {
                printf("*");
            }
            for(j4 = 1; j4 <= i4; j4++)
            {
                printf("%i*",i4);
                counter1 = 1;
                /*right side asterisks*/
                if(j4 == i4)
                {
                    for(asterisks = 1; asterisks <= (((17-((2*i4)-1))/2)-1);asterisks++)
                    {
                        printf("*");
                    }
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Sorry this shape is not available for more than 8 rows");
    }
    return 0;
}
/* ******************** Sub-Program Section End ****************** */

/*
******************************************************************************************
User            Date              Brief
******************************************************************************************
Sameh         11Feb2023-10:59PM                Added half pyramid by numbers
Sameh         11Feb2023-11:03PM                Added half pyramid by letters
Sameh         11Feb2023-11:14PM                Added Full pyramid by numbers
Sameh         11Feb2023-11:51PM                Added Full Pyramid by numbers and asterisks
*/