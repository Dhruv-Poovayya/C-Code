/* To find the number of duplicate elements in a array */
#include<stdio.h>
int duplicate_counter(int arr[],int size);
int main()
{
    int arr[]= {1,2,3,1,4,5,3};
    int size=0;
    int result=0;
    size=sizeof(arr)/sizeof(arr[0]);
    result=duplicate_counter(arr,size);
    printf("The number of duplicate elements in the array %d",result);
    return 0;
}

int duplicate_counter(int arr[],int size)
{
    int i=0;
    int j=0;
    int counter=0;

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                counter++;
                printf("The duplicate elements are:%d\n",arr[j]);
            }
        }
    }
    return counter;
}

