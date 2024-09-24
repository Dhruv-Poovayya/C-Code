#include<stdio.h>
int main()
{
    int array[50];
    int n=0;
    int sum=0;
    int *ptr=&array;
    printf("Enter the number of elements:");
    scanf("%d",&n);

// Input to array

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }


// TO sort the elements of array
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

// To print array elements

    printf("The sorted array is:");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }

// To add the elements of array

    for(int i=0; i<n; i++)
    {
        sum+=*(ptr+i);
    }

    printf("\n\nThe sum array elements is %d\n\n",sum);

    return 0;
}
