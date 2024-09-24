/*TO INSERT AND DELETE AN ELEMENT IN ARRAY */

#include<stdio.h>

int main ()
{
    int arr[]= {1,2,3,4,5};
    int pos=2;
    int element=8;

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Size of array:%d\n",size);

    // TO INSERT AN ELEMENT
    for(int i=size; i>pos; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=element;
    size++;

// TO DELETE AN ELEMENT

  for(int i=pos; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;

    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

return 0;
}

