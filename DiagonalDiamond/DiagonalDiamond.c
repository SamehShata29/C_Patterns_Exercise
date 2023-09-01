/*
********************************************************************
* @file          : Diamond.c
* @author        : Sameh Shata
* @brief         : Contains generation of Diagonal & Sides of a Rhombus/Diamond
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
unsigned int rows, i, j;

/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows: ");
    scanf_s("%i",&rows);
    /*Diagonal & Sides of a Rhombus/Diamond*/
    printf("\nDiagonal & Sides of a Rhombus/Diamond\n");
    if(rows % 2)
    {
        unsigned int center = (rows/2);
        for(i = 0; i < rows;i++)
        {
            for(j = 0; j < rows;j++)
            {
                //Center vertical   //Center Horizontal    //UPPER left   //Upper right      //bottom left      //bottom right
                if((j == center) || (i == center) || ((i+j) == center) || (j-i) == center || (i-j) == center || ((i+j) == center*3))
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
                printf("Invaild Input please insert an odd number");
    }

    return 0;
}
/* ******************** Sub-Program Section End ****************** */

/*
******************************************************************************************
User            Date              Brief
******************************************************************************************
Sameh         13Feb2023-5:35PM                Added Diagonal & Sides of a Rhombus/Diamond

*/