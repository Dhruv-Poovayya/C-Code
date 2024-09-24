/* To Toggle nth bit of an give number */
#include<stdio.h>
#include<math.h>
int main()
{
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nEnter a the bit to be reset:");
    scanf("%d",&n);
    n=pow(2,(n-1)); // Dont use because power returns double.
    num=num^(1<<(n-1));
    printf("\nThe value of the number after the bit is toggled is:%d",num);
    return 0;
}
