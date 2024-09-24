/*WAP to perform addition and subtraction t of  2-D array.*/

#include<stdio.h>

int main()
{

    int a[2][2]= {1,2,3,4};
    int b[2][2]= {10,20,30,40};
    int result[2][2];
    int i=0;
    int j=0;

// ADDITION
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            result[i][j]=a[i][j]+b[i][j];   //  result[i][j]=a[i][j]-b[i][j]------> SUBTARCTION


        }
    }
// Result

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\v",result[i][j]);

        }
    }

    return 0;

}

