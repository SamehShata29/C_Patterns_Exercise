/*
********************************************************************
* @file          : Diamond.c
* @author        : Sameh Shata
* @brief         : Contains generation of Diamond shpaes
********************************************************************
*/

/* ******************** Include Section Start ******************** */
#include <stdio.h>
#include <stdlib.h>
/* ******************** Include Section End   ******************** */

/* ******************** Global Variable Section Start ************ */
/*-----------------(is) are the iterators for rows generation-------------------*/
/*--------------(js) are the iterators for coloumns generation------------------*/ 
/*VARIABLES of Solid Diamond*/
unsigned int rows, i, j, spaces;
/*VARIABLES of Hollow Diamond*/
unsigned int ii, jj, spaces1;
/*VARIABLES of Solid half Diamond*/
unsigned int rows1, i3, j3;

/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows: ");
    scanf_s("%i",&rows);
    /*SOLID DIAMOND*/
    printf("\nSolid Diamond\n");
    for(i = 1;i <= rows*2; i++)
    {
        /*UPPER HALF*/
        if(i <= rows)
        {
            for(spaces = 1; spaces <= (rows-i);spaces++)
            {
                printf(" ");
            }
            for(j = 1; j <= i; j++)
            {
                printf("* ");
            }
            }
        /*BOTTOM HALF*/
        else
        {
            for(spaces = 1; spaces <= ((i - rows)-1);spaces++)
            {
                printf(" ");
            }
            for(j = (rows*2); j >= i; j--)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    /*HOLLOW DIAMOND*/
    printf("\nHollow Diamond\n");
    for(ii = 1;ii <= rows*2; ii++)
    {
        /*UPPER HALF*/
        if(ii <= (rows))
        {
            for(spaces1 = 1; spaces1 <= (rows-ii);spaces1++)
            {
                printf(" ");
            }
            for(jj = 1; jj <= ii; jj++)
            {
                if((ii == 1) || (jj == 1) || (jj == ii))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        /*BOTTOM HALF*/
        else
        {
            for(spaces1 = 1; spaces1 <= ((ii - rows)-1);spaces1++)
            {
                printf(" ");
            }
            for(jj = (rows*2); jj >= ii; jj--)
            {
                if((ii == rows*2) || (jj == 1) || (jj == ii) || (jj == rows*2))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
        }
    /*SOLID HALF DIAMOND*/
    printf("Enter the number of the rows should be >= 3 and an odd number: ");
    scanf_s("%i",&rows1);
    printf("\nSolid Half Diamond\n");
        for(i3 = 1;i3 <= rows1; i3++)
        {
            /*UPPER HALF*/
            if(i3 <= ((rows1 + 1) / 2))
            {
                for(j3 = 1; j3 <= i3; j3++)
                {
                    printf("* ");
                }
            }
            /*BOTTOM HALF*/
            else if(i3 > ((rows1 + 1) / 2))
            {
                for(j3 = (rows1); j3 >= i3; j3--)
                {
                    printf("* ");
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
Sameh         12Feb2023-3:10PM                Added Solid Diamond
Sameh         12Feb2023-3:20PM                Added Hollow Diamond
Sameh         12Feb2023-4:13PM                Added Hlaf Solid Diamond
*/