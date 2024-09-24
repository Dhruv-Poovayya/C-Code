#include<stdio.h>
int main()
{
int num,n;
printf("Enter a number:");
scanf("%d",&num);
printf("\nEnter a bit to Reset:");
scanf("%d",&n);
n=pow(2,(n-1));
n=~n;
num=num&n;
printf("\nThe val of the number after bit is reset is %d",num);
return 0;
}
