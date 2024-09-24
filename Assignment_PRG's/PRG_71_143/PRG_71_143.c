/*To create a structure and display its elements:*/

#include<stdio.h>
struct
{
    int id;
    int year_of_joining;
    float salary;
} e1;
int main()

{
    printf("Enter the employee details:\n");
    while(1)
    {
        printf("\nEnter the employee id:");
        scanf("%d",&e1.id);

        printf("\nEnter year of joining:");
        scanf("%d",&e1.year_of_joining);

        printf("\nEnter the salary:");
        scanf("%f",&e1.salary);


        printf("The employee id is %d and year of joining is %d and salary %f",e1.id,e1.year_of_joining,e1.salary);
    }
    return 0;
}
