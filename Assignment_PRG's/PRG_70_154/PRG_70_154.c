#include<stdio.h>
#include<stdarg.h>

void sorter(int *array,int count,...);

int main()
{
    int count=5;
    int array[count];

    sorter(array,count,10000,100,999,6394,12);
    for(int i=0;i<count;i++)
    {
        printf("%d  ",*(array+i));
    }
    return 0;
}

void sorter(int *array,int count,...)
{
    va_list elements;
    va_start(elements,count);

    for(int i=0; i<count; i++)
    {
        *(array+i)=va_arg(elements,int);
    }


    for(int i=0; i<count; i++)
    {
        for(int j=i+1; j<count; j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }

        }
    }


}
