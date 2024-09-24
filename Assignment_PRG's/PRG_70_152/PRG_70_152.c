//#include<stdio.h>
//#include<stdarg.h>
//
//int average_finder(int count,...);
//int main()
//{
//    int count=0;
//    int result=0;
//
//    printf("Enter count of elements being passed:");
//    scanf("%d",&count);
//    result=average_finder(count,10,20,30,40,50);
//
//    printf("\nThe average of elements is:%d",result);
//
//    return 0;
//}
//
//int average_finder(int count,...)
//{
//    va_list elements;
//
//    int average=0,sum=0;
//
//    va_start(elements,count);
//
//    for(int i=0; i<count; i++)
//    {
//        int n=va_arg(elements,int);
//        sum=sum+n;
//    }
//
//    //  printf("%d\n",sum);
//    average=sum/count;
//    //  printf("%d",average);
//    return average;
//}

/*Using array */

#include<stdio.h>
#include<stdarg.h>

int average_finder(int count,...);
int main()
{
    int count=0;
    int result=0;
    while(1)
    {
        printf("Enter count of elements being passed:");
        scanf("%d",&count);

        int a[count];
////        printf("%d\n\n",a[2]);

        printf("Enter the elements of array:");

        for(int i=0; i<count; i++)
        {
            scanf("%d",&a[i]);
        }

        result=average_finder(count,a[0],a[1],a[2],a[3],a[4]);

        printf("\nThe average of elements is:%d\n\n",result);

    }
    return 0;
}

int average_finder(int count,...)
{
    va_list elements;

    int average=0,sum=0;

    va_start(elements,count);

    for(int i=0; i<count; i++)
    {
        int n=va_arg(elements,int);
        sum=sum+n;
    }

    //  printf("%d\n",sum);
    average=sum/count;
    //  printf("%d",average);
    va_end(elements);
    return average;
}



