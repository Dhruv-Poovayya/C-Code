#include<stdio.h>

#include<stdarg.h>

float max_finder(int count,...);

int main()
{
    int count=0;
    float result=0;

    printf("Enter the number of variables:");
    scanf("%d",&count);

    float a[count];
    for(int i=0; i<count; i++)
    {
        scanf("%f",&a[i]);
    }

    result=max_finder(count,a[0],a[1],a[2],a[3],a[4]);
    printf("The max value is:%.3f",result);
    return 0;
}

float max_finder(int count,...)
{

    va_list list;
    float max=0;

    va_start(list,count);

    for(int i=0; i<count; i++)
    {
float n=va_arg(list,double); // float gets promoted to double so data type is written as double.
              if(n>max)
        {
            max=n;
        }
        va_end(list);
    }

    return max;
}
