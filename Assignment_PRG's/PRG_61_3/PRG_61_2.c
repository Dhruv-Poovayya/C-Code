/*WAP to find the second biggest element of a 1-D array.*/

#include<stdio.h>
int SecondLargest(int nums[],int size);
int main()
{
    int nums[]= {88,100,25,65,457,25};
    int size=0;
    int result=0;
    size=sizeof(nums)/sizeof(nums[0]);
    printf("The size of array is :%d\n\n",size);
    result=SecondLargest(nums,size);
    printf("The Second Largest Element is:%d\n\n",result);
    return 0 ;
}

int SecondLargest(int *nums,int size)
{

    int i=0,j=0;
    int temp=0;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(nums[i]<nums[j])
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }

        }
    }

    return nums[1];

}


