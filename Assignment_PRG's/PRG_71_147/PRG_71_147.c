/*TO Print details of student with marks below 50 */
#include<stdio.h>
#include<string.h>
struct students
{

    int roll_no;
    int total_marks;
    char section;
} student[50];

int main()
{
    int n=0;

    printf("Enter the number of students details to be stored:");
    scanf("%d",&n);

    printf("\nEnter the details of the students");
    for(int i=0; i<n; i++)
    {
        printf("\n\nEnter student %d details",i+1);

        printf("\nRoll No:");
        scanf("%d",&student[i].roll_no);

        printf("\nSection:");
        scanf(" %c",&student[i].section);
        student[i].section=toupper(student[i].section);


        printf("\nTotal marks:");
        scanf("%d",&student[i].total_marks);



    }

    printf("\nThe details of students with marks below 50:\n");

    int j=1;

    for(int i=0; i<n; i++)
    {
        if(student[i].total_marks<50)
        {
            printf("\n(%d)",j);
            printf("Roll No:%d",student[i].roll_no);
            printf("\n   Section:%c",student[i].section);
            printf("\n   Total-marks:%d/100",student[i].total_marks);

            printf("\n---------------------\n");

            j++;

        }
        if(j==1)
        {
            printf("Congratulations!!! No student has scored below 50\n\n");
        }

    }

    return 0;

}






