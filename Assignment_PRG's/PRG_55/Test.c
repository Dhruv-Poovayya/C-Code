#include<stdio.h>
int main()
{
    int a,b,rem,quo;
    while(1)
    {
        printf("Enter the value of number:");
        scanf("%d",&a);
        printf("Enter the value of number:");
        scanf("%d",&b);
        rem=a%b;
        quo=a/b;
        printf("%d\n\n",rem);
        printf("%d\n\n",quo);
    }
}
