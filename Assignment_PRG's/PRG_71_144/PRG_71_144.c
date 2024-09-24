/*To read and print employee details using structure*/
#include <stdio.h>
#define MAX 1000

int check_year(int );
struct employee
{
    int YearOfJoining;
    int Employee_id;
    int YOB;
    char Blood_Group;
    float salary;
} e[MAX];

int main()
{
    int n;
    printf("Enter the number of employee:");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("\nEnter the details of employee %d\n",i+1);

        printf("\nYear of joining:");
        scanf("%d",&e[i].YearOfJoining);

        printf("\nEmployee Id:");
        scanf("%d",&e[i].Employee_id);

        printf("\nYear of Birth:");
        scanf("%d",&e[i].YOB);

        printf("\nBlood Group:");
        scanf(" %c",&e[i].Blood_Group);

        printf("\nSalary:");
        scanf("%f",&e[i].salary);

        printf("\n-----------------------------------\n");
    }

    printf("\n\nThe list of employee and their details are:");

    for(int i=0; i<n ; i++)
    {
        printf("\n\nThe details of employee %d is:\n",i+1);

        if(e[i].YearOfJoining)
        {
            e[i].YearOfJoining=check_year(e[i].YearOfJoining);

            printf("\nYear of joining:%d",e[i].YearOfJoining);
        }

        printf("\nEmployee Id:%d",e[i].Employee_id);

        printf("\nYear of Birth:%d",e[i].YOB);

        printf("\nBlood Group:%c",e[i].Blood_Group);

        printf("\nSalary:%f",e[i].salary);

        printf("\n-----------------------------------\n");
    }
    return 0;
}

// Function to check if entered year is valid
int check_year(int a)
{

    if(a>=1900 && a<=2100)
        return a;
    else
        return -1;
}
