#include<stdio.h>
#include<stdlib.h>
int main()
{
// Adding two numbers using single pointer variable.
int arr[2]={10,20};
int *ptr=arr;
printf("The sum of %d and %d is %d\n",arr[0],arr[1],(*ptr)+*(ptr+1));

// Adding two numbers using two pointer variable.

int i=0,j=0;

printf("Enter the value of i:");
scanf("%d",&i);

printf("Enter the value of j:");
scanf("%d",&j);
//Pointer declaration
int *ptr1=&i;
int *ptr2=&j;

printf("The sum of %d and %d is %d",i,j,(*ptr1)+(*ptr2));

// Adding two numbers with a single pointer


    int *ptr3=NULL;
    int n=0;
    int sum=0;
    printf("\n\n\nEnter the number of elements:");
    scanf("%d",&n);
    ptr3=(int *)calloc(n,sizeof(int));

     printf("\nEnter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr3+i);
    }
for(int i=0;i<n;i++)
    {
         sum=sum+*(ptr3+i);
    }
printf("The addition of %d elements is %d\n\n",n,sum);

return 0;
}

