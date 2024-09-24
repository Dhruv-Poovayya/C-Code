/* Function to find Square of a number */
#include<stdio.h>
int square(int num);
int main()
{
int num;
int result;
printf("Enter the Value of number:");
scanf("%d",&num);
result=square(num);
printf("The square of %d is %d",num,result);
return 0;

}

int square(int num)
{
    num*=num;
    return num;
}
