#include<stdio.h>
int main()
{
    int arr[]= {1,1,2,2,3,3,4,4,5};
    int  result=0;
    int   size=0;
    size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++)
    {

        result^=arr[i];
    }
        printf("%d ",result);


return 0;
}
