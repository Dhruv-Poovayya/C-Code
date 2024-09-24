#include<stdio.h>
#define size 10
int main()
{
    int a[size][size];
    int b[size][size];
    int c[size][size];

    int m=0,n=0;
    int p=0,q=0;
    q=0;

    printf("Enter the size of Matrix A:\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter the size of Matrix B:\n");
    scanf("%d %d",&p,&q);

// Matrix A elements
printf("\nEnter the elements of Matrix A:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }



// Matrix B elements
printf("\nEnter the elements of Matrix B:\n");
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

// Resultant Matrix set to Zero

    for(int i=0; i<m ; i++)
    {
        for(int j=0; j<q; j++)
        {
            c[i][j]=0;
        }
    }



// Matrix multiplication

for(int i=0; i<m; i++)
{
    for(int j=0; j<q; j++)
    {
        for(int k=0; k<n; k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
}
printf("\nThe resultant Matrix:\n");
for(int i=0; i<m;i++)
{
    for(int j=0;j<q;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
return 0;
}

