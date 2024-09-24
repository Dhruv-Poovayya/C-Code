/*Given Jan 1 of given year to be Sunday, read a date in the same year and calculate the day of the week.*/
#include<stdio.h>
int main()
{
    int date,day;
    printf("Enter a valid date:");
    scanf("%d",&date);
    day=date%7;
    switch(day)
    {
    case 1:
        printf("The day is Sunday");
        break;
    case 2:
        printf("The day is Monday");
        break;
    case 3:
        printf("The day is Tuesday");
        break;
    case 4:
        printf("The day is Wednesday");
        break;
    case 5:
        printf("The day is Thursday");
        break;
    case 6:
        printf("The day is Friday");
        break;
    case 7:
        printf("The day is Saturday");
        break;
    default:
        printf("Enter a valid date");
    }
    return 0;

}
