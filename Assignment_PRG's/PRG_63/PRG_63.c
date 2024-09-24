/*MATRIX MULTIPLICATION */
#include<stdio.h>
#define MAX 10

void array(int a[MAX][MAX],int row,int col);
int main()
{
    int a[MAX][MAX];
    int row=0;
    int col=0;

    printf("Enter the number of Rows");
    scanf("%d",&row);
    printf("Enter the number of Columns");
    scanf("%d",&col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    array(a,row,col);
}

void array(int a[MAX][MAX],int row,int col)
{
    int b[row][col];

    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
        {
            b[row-i-1][col-j-1]=a[i][j];
        }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",b[i][j]) ;
        }

        printf("\n");
    }
}
