/* To calculate sum and average of array elements */
#include<stdio.h>
int AvgOfArray(int a[],int size);
int main()
{

    int a[5]= {1,2,3,4,5};
    int size=0;
    float avg=0;
    size=sizeof(a)/sizeof(a[0]);
    avg=AvgOfArray(a,size);
    printf("The average of elements array is %f:",avg);
    return 0;
}

int AvgOfArray(int *a,int size)
{
    int i=0;
    int sum=0;
    float avg=0;
    for(i=0; i<size; i++)
    {
        sum+=a[i];
    }
    avg=(float)sum/size;
    return avg;
}

