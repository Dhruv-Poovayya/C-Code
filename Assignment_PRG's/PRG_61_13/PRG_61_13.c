/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single element.
Test Data:
Input: nums = [4,1,2,1,2]
o/p=4 */


#include<stdio.h>
int Single_Element(int arry[],int size);
int main()
{
    int arry[10]={0};
    int size=0;
    int SingleElement=0;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arry[i]);
    }
    SingleElement=Single_Element(arry,size);
    printf("The Single element in given array is:%d",SingleElement);
    return 0;
}

int Single_Element(int *arry,int size)
{
    int result=0;

    for(int i=0;i<size;i++)
    {
        result^=arry[i];
    }

    return result;
}
