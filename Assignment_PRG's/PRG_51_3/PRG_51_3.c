/* To find the nth root of a number*/
#include<stdio.h>
int main()
{
    float n,power,result;
    int num;
    while(1)
    {
    printf("Enter the value of n for nth root:");
    scanf("%f",&n);
    printf("Enter the number:");
    scanf("%d",&num);
    power= 1/n;
    result=pow(num,power);
    printf("\nThe %.2f root of %d is:%.2f\n\n",n,num,result);
    }
return 0;
}

