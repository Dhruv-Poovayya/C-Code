/* To check a year is leap year or not , if not find the next nearest leap year*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter an Year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||year%400==0)
        printf("%d is an Leap Year",year);
    else
    {
        while(year%4!=0)
        {
            year=year+1;
        }
        printf("The next nearest leap year is:%d",year);
    }
    return 0;
}
