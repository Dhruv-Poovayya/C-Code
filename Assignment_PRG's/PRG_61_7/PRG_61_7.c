/*WAP to separate odd and even integers in separate arrays.*/
#include<stdio.h>
// Function Declaration
void ArraySeparator(int range);
void EvenArray (int even[],int );
void OddArray(int odd[],int );

// Main Function
int main()
{
    int range=0;
    printf("Enter the range to generate numbers:");
    scanf("%d",&range);

    ArraySeparator(range);
    return 0;
}

// Function to Store Even and Odd Elements

void ArraySeparator(int range)
{
    int i=0;
    int j=0,k=0;
    int size=(range/2)+1;
    int even[size];
    int odd[size];
    for(i=1; i<=range; i++)
    {
        if(i%2==0)
        {
            even[j]=i;
            j++;
        }
        else
        {
            odd[k]=i;
            k++;
        }
    }

    EvenArray(even,size);
    OddArray(odd,size);
}

// Function to print even elements
void EvenArray(int *even,int size)
{
    int i=0;

    printf("\nThe Array of Even Elements is:\n");

    for(i=0; i<size; i++)
    {
        printf("%d ",even[i]);
    }

}


// Function to print odd elements

void OddArray(int *Odd,int size)
{
    int i=0;

    printf("\nThe Array of Odd Elements is:\n");

    for(i=0; i<size; i++)
    {
        printf("%d ",Odd[i]);
    }
}
