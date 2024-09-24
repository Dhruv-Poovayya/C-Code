#include<stdio.h>
#define MAX 100

struct students
{
    int month;
    int date;
    int year;

} student[MAX];

int main()
{
    int n=0;
    int std_no=0;
    int current_year=0;
    int result=0;

    printf("Enter the number of students:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("\nEnter the details of students %d\n",i);


        printf("\nEnter the year of Birth:");
        scanf("%d",&student[i].year);


    // TO check if year is valid.

        if(student[i].year<1900)
        {
            while(student[i].year<1900)
            {
                printf("Enter valid year:");
                scanf("%d",&student[i].year);
            }
        }


        printf("\nEnter the date:");
        scanf("%d",&student[i].date);

        printf("\nEnter the month:");
        scanf("%d",&student[i].month);

    }

    printf("\nEnter the current year:");
    scanf("%d",&current_year);

    printf("\nEnter the student number, whose age is to be read:");
    scanf("%d",&std_no);


    // to check if student number is valid.
    if(std_no>n)
    {
        printf("Enter the correct student number:");
    }
    else
    {
         result=current_year - student[std_no].year ;
    }


    printf("\nThe age of student %d is %d",std_no,result);

    return 0;


}
