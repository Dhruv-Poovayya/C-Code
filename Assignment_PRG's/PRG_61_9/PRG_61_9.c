#include<stdio.h>
const int rows=2;
const int cols=2;
void reverse_array(int arry[rows][cols],int rows,int cols);
int main()
{
    int arry[rows][cols];
    printf("Enter the array elements:");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    reverse_array(arry,rows,cols);
    return 0;
}


void reverse_array(int arry[rows][cols],int rows,int cols)
{
    int brry[rows][cols];

    for(int i=0; i<rows; i++)

    {
        for(int j=0; j<cols; j++)

        {
            brry[rows-1-i][cols-1-j]=arry[i][j];
        }
    }
          brry[1][1]='\0';
    printf("The reversed array is:");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",brry[i][j]);
        }
    }
}


