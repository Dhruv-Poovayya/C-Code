/*factorial using Pointer */

#include<stdio.h>

int main()
{
    int num=0,count=1;
    int *ptr=&count;
    printf("Enter the value of Num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        *ptr=*ptr*i;
    }

    printf("%d",count);
    return 0;
}
