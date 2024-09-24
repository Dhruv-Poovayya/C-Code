/* To Reverse the elements of array and add them */

#include<stdio.h>
int main()
{
    int array[50];
    int *ptr=&array;              // array can be written an *(array+i) because name of array can be used as pointer *array points to 1st element in the array i.e array[i]=*(array+i)
    int temp[50];
    int *ptr1=&temp;
    int sum=0;
    int size=0;

    printf("Enter the number of elements:");
    scanf("%d",&size);

    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    int j=0;
    for(int i=size-1; i>=0; i--)
    {
        *(ptr1+j)=*(ptr+i);
          j++;
    }

    printf("\n\nThe reversed array is:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(ptr1+i));
    }

    // TO print the sum array elements

    for(ptr=&array[0];ptr<(&array[size]);ptr++)
    {
        sum=sum+(*ptr);
    }
    printf("\n\nThe sum array elements is %d\n\n",sum);

return 0;
}
