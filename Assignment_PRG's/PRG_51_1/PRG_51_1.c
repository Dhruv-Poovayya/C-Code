#include <stdio.h>

int main()
{
    int i, j;
    int row = 5;

    for (i = 1; i <= row; i++)
    {
        // Print leading spaces
        for (j = row; j > i; j--)
        {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
        j=j-1;
    }

    return 0;
}

//    for(i=1; i<=row; i++)
//    {
//        for(n=i; n<=row-1; n++)
//        {
//            printf(" ");
//        }
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//
//        printf("");
//
//    }
//}

//
//return 0;
