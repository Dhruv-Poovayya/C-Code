#include<stdio.h>
int main()
{
    char employee_ID[10];
    float salary, hrs_wk;
    int amt_hr=15000;
    printf("Enter the employee ID:");
    scanf("%s",&employee_ID);
    printf("\nEnter the number of working hrs:");
    scanf("%f",&hrs_wk);
    printf("\nID:%s\nSalary is Rs:%.2f",employee_ID,amt_hr*hrs_wk);
    return 0;
}
