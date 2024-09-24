/*To Check whether the number is Positive or Negative*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>=0)
        printf("The number is Positive");
    else
        printf("The number is Negative");
    return 0;
}
