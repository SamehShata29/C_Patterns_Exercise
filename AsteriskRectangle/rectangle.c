#include <stdio.h>
#include <stdlib.h>

/*VARIABLES*/
unsigned int i, j, rows, cols, i2, j2;

int main()
{
/*SOLID RECTANGLE*/
printf("Enter the number of rows: ");
scanf_s("%i",&rows);
printf("Enter the number of coloumns: ");
scanf_s("%i",&cols);
printf("\nSolid Rectangle\n");
for(i = 1;i <= rows; i++)
{
    for(j = 1;j <= cols; j++)
    {
        printf("* ");
    }
    printf("\n");
}
/*HOLLOW RECTANGLE*/
printf("\nHollow Rectangle\n");
for(i2 = 1;i2 <= rows; i2++)
{
    for(j2 = 1;j2 <= cols; j2++)
    if(i2 == 1 || i2 == rows || j2 == 1 || j2 == cols)
    {
        printf("* ");  
    }
    else
    {
        printf("  ");
    }
    printf("\n");
}

return 0;
}