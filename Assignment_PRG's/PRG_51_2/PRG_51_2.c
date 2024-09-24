/* To Print an Pyramid of Star */
#include <stdio.h>

int main()
{
    int i, j, k, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop
    for(i = 1; i <= rows; i++)
    {
        // Loop for printing spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for(k = 1; k <= i; k++)
        {
            printf("*");
        }
        for(k = 1; k <= i; k++)
        {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

