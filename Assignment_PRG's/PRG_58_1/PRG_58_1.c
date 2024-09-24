/* Function that  takes no arguments but returns a value */
#include<stdio.h>
int fact();

int main()
{
    long long int result=0;
    printf("Finding a Factorial of a Number\n\n");
    result=fact();
    printf("%lld",result);
}

int fact()
{
    int i,num;
    long long int fact=1;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        fact*=i;
    }
    return fact;
}
