/* Reverse array using pointers */
#include<stdio.h>
#define size 5
int main()
{
    int a[size];
    int *ptr;
    int sum=0;
    printf("Enter the elements of array:\n");
    for (  ptr=a; ptr<a+size  ; ptr++  )
    {
        scanf("%d",ptr);
    }

    printf("\nThe array in reversed order\n");
    printf("\n");

    for(ptr=(a+size-1); ptr>=a; ptr--)
    {
        printf("%d  ",*(ptr));
    }

    for(ptr=a ; ptr<a+size; ptr++)
        sum=sum+*(ptr);

    printf("\n\nThe sum of array elements is %d\n\n",sum);

    return 0;


}
