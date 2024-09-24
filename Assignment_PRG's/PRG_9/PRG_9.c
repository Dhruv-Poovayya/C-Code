#include<stdio.h>
int main()
{
    int num1=2147483647;//maximum value int can take is 2^32=2147483647
    short int num2=32768;//maximum value int can take is 2^16=32768
    printf("%d\n",num1+1);
    printf("%d\n",num2+1);
    return 0;

}
