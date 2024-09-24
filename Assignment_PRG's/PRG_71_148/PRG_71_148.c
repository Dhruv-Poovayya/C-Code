#include<stdio.h>
#define MAX 100
struct student
{

    char name[50];
    int marks;

} student[MAX],temp;



int main()
{
    int n=0;

    printf("Enter the number of students:");
    scanf("%d",&n);


    for(int i=1; i <=n ; i++)
    {
        printf("\nEnter the student %d details:",i);

        printf ("\nEnter the name of student:");
        scanf("%s",student[i].name);

        printf("\nEnter the total marks:");
        scanf("%d",&student[i].marks);


        //  TO check marks is valid.
        if(student[i].marks<0 || student[i].marks>100)
        {
            while(student[i].marks>100 || student[i].marks<0)
            {
                printf("\nEnter a valid marks:");
                scanf("%d",&student[i].marks);
            }
        }
    }

  // To arrange marks in descending order..

    for(int i=1; i<=n ; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(student[i].marks<student[j].marks)
            {
                temp = student[j];
                student[j]=student[i];
                student[i]=temp;
            }
        }

    }


    printf("\nThe details of student with highest marks is:");
    printf("\nName:%s",student[1].name);
    printf("\nMarks:%d",student[1].marks);

    return 0;
}
