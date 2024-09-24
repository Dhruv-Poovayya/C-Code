/*To find the absolute value of an integer without using library functions.*/
#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter an Integer ");
    scanf("%d",&num);
   //result=sqrt(pow(num,2));
    result=pow((num*num),0.5);
    printf("The abs val of %d is %d",num,result);
    return 0;
}
