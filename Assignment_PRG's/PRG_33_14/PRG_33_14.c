#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    ((num1==30)||(num2==30)||(num1+num2==30))?printf("True"):printf("False");
    return 0;
}
