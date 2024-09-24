#include<stdio.h>
#include<stdlib.h>
int main()
{
    int years=0;
    int temp=0;
    int week=0;
    int days=0;

    printf("Enter the number of days:");
    scanf("%d",&days);
    if(days<=365)
    {
        if(days==365)
        {
            years=1;
            printf("%d\n",years);
        }
        else
        {
            week=days/7;
            days=days%7;
            printf("%d-weeks,",week);
            printf("%d-days\n",days);
        }
    }
    else if (days>365)
    {
        years=days/365;
        temp=365*years;
        temp=days-temp;// or remaining days after converting to years i.e days%365=remaining days after converting to years
        week=temp/7; // Gives the number of week
        days=temp%7; //Mod of week gives remaining days
        printf("%d-years,",years);
        printf("%d-weeks,",week);
        printf("%d-days",days);
    }
    return 0;
}
