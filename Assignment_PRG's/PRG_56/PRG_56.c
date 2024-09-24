#include<stdio.h>
int fab(int n1,int n2,int n);
int main()

{
    int n1,n2;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    n1=0;
    n2=1;
    printf("%d",n1);
    fab(n1,n2,n);
    return 0;
}

int fab(int n1,int n2,int n)
{
    int nxt;
    for(int i=3; i<=n; i++)
    {

        nxt=n1+n2;
        printf(",%d",nxt);
        n1=n2;
        n2=nxt;

    }
}
