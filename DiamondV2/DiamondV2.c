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
unsigned int rows, i, j, counter;
/*VARIABLES of Hollow Diamond*/
unsigned int ii, jj, counter2 = 1, counter3;
/*VARIABLES of Solid half Diamond*/
unsigned int rows1, i3, j3, num = 3, num1=5;

/* ******************** Global Variable Section End   ************ */

/* ******************** Sub-Program Section Start **************** */
int main()
{
    printf("Enter the number of the rows should be >= 4 and an even number: ");
    scanf_s("%i",&rows);
    /*SOLID half DIAMOND 1*/
    if((rows >= 4) && ((rows % 2) == 0))
    {
        printf("\nSolid Half Diamond 1\n");
        counter = (rows / 2);
        for(i = 1; i <= rows;i++)
        {
            /*UPPER HALF*/
            if(i <= (rows/2))
            {
                for(j = 1; j <= i;j++)
                {
                    if(j == i)
                    {
                        printf("%i",i);
                    }
                    else
                    {
                        printf("%i*",i);
                    }
                }
            }
            else
            {
                for(j = rows; j >= i; j--)
                {
                    if(j == i)
                    {
                        printf("%i",counter);
                    }
                    else
                    {
                        printf("%i*",counter);
                    }
                }
                counter--;
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input!! please enter a number that is even and greater or equal to 4 \n");
    }
    /*SOLID half DIAMOND 2*/
    if((rows >= 4) && ((rows % 2) == 0))
    {
        printf("\nSolid Half Diamond 2\n");
        for(ii = 1; ii <= rows;ii++)
        {
            /*UPPER HALF*/
            if(ii <= (rows/2))
            {
                for(jj = 1; jj <= ii;jj++)
                {
                    if(jj == ii)
                    {
                        printf("%i",counter2);
                    }
                    else
                    {
                        printf("%i*",counter2);
                    }
                    counter2++;
                }
                counter3 = counter2 - j + 1;
            }
            else
            {
                for(jj = rows; jj >= ii; jj--)
                {
                    if(jj == ii)
                    {
                        printf("%i",counter3);
                    }
                    else
                    {
                        printf("%i*",counter3);
                    }
                    counter3++;
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input!! please enter a number that is even and greater or equal to 4 \n");
    }
    /*SOLID HALF DIAMOND 3*/
    printf("Enter the number of the rows 7 >= [rows] >= 3 and an odd number: ");
    scanf_s("%i",&rows1);
    if((rows1 >= 3) && (rows1 <= 7) && ((rows1 % 2) != 0))
    {
        printf("\nSolid Half Diamond 3\n");
        for(i3 = 1;i3 <= rows1; i3++)
        {
            /*UPPER HALF*/
            if(i3 <= ((rows1 + 1) / 2))
            {
                for(j3 = 1; j3 <= i3; j3++)
                {
                    printf("%i",num);
                }
                num++;
            }
            /*BOTTOM HALF*/
            else
            {
                for(j3 = rows1; j3 >= i3; j3--)
                {
                    printf("%i",num1);
                }
                num1--;
            }
        printf("\n");
        }
    }
    else
    {
        printf("Invalid input!! please enter a number so that 7 >= [rows] >= 3 and an odd number \n");
    }
    return 0;
}
/* ******************** Sub-Program Section End ****************** */

/*
******************************************************************************************
User            Date              Brief
******************************************************************************************
Sameh         12Feb2023-4:45PM                Added solid half Diamond 1
Sameh         12Feb2023-6:39PM                Added solid half Diamond 2
*/