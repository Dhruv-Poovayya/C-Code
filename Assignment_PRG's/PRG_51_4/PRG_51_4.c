/*Fabnocci series*/
#include <stdio.h>
int main()
{
    int n,n1=0;
    int n2=1;
    int next=0;
    printf("Enter the n value");
    scanf("%d",&n);
    printf("\nThe Fabnocci series is %d %d",n1,n2);

for(int i=3;i<=n;i++)
{
    next=n1+n2;
    printf(" %d",next);
    n1=n2;
    n2=next;
}
return 0;
}

