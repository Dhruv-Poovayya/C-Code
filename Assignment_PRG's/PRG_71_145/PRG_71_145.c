/*TO arrange students records in descending order of marks */
#include<stdio.h>
#define MAX 150

// Function to check valid marks
int check_marks(int );

// Structure declaration

struct Student
{
    char name[50];
    int subject[8];
    int totalmarks;
} student[MAX],temp;

// Main function

int main()
{
    int n;
    int total=0;

    printf("Enter the number of students:");
    scanf("%d",&n);


  // Each students subject from console

    for(int i=0; i<n ; i++)
    {
        total=0;// for each student total is reset



        printf("\nEnter the details of %d student\n",i+1);

        printf("\nEnter the student %d name:",i+1);
        scanf(" %s",&student[i].name);

        for(int j=0; j<8; j++)
        {
            printf("\nEnter marks of Subject %d:",j+1);

            scanf("%d",&student[i].subject[j]);

            student[i].subject[j]=check_marks(student[i].subject[j]);// Function call to check marks entered is valid or Not.

            total=total+student[i].subject[j];
        }

        printf("******Total marks calculated before padding:%d*******",total);

        student[i].totalmarks=total;
        printf("\n---------------------------------\n");

    }


// Sorting Students based on Total marks in Descending order



    for(int i=0; i<n; i++)
    {
        printf("Entered sorting loop1\n");
        for(int j=i+1; j<n; j++)
        {
            if(student[i].totalmarks<student[j].totalmarks)
            {
                temp=student[j];
                printf("*****temporary data:%d*******\n",temp.totalmarks);
                student[j]=student[i];
                student[i]=temp;
                printf("Entered sorting loop2\n");
            }
        }
    }

// Final students list


    for(int i=0; i<n; i++)
    {
        printf("The details of student%d\n",i+1);

        printf("\nName:%s",student[i].name);

        for(int j=0; j<8; j++)

        {
            printf("\nSubject %d marks:%d",j+1,student[i].subject[j]);
        }
        printf("\n\nTotalmarks:%d",student[i].totalmarks);

        printf("\n\n----------------END OF STUDENT %d details--------------------\n\n",i+1);


    }

}

int check_marks(int marks)
{
    if(marks>=35 && marks<=100)
    {
        return marks;
    }
 else
     return 0;

}

