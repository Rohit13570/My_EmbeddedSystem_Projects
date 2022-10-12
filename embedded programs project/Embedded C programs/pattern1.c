/**
 * C program to print hollow rhombus star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    printf("Enter rows : ");
    scanf("%d", &rows);


    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows; j++)
        {
            printf("3 ");
        }

}
    return 0;
}
