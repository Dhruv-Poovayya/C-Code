/* Print array elements using pointer */
#include<stdio.h>
int main()
{
    int n=0;
    int arr[100];
    int *ptr=arr;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("The elements of array are: ");

    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}
