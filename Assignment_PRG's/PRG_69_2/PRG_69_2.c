/*To find min and max value between number */
#include<stdio.h>
int main()
{
    int arr[]={1,20000,20000,300000,50000};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=0,min=0;
    int *ptr=&arr;
    max=arr[0];
    min=arr[0];

    for(int i=1;i<size;i++)
    {
        if(*(ptr+i)>max )
          max=*(ptr+i);

        if(*(ptr+i)<min)
            min=*ptr+i;

    }

    printf("The max value is %d and min value is %d",max,min);
    return 0;
}
