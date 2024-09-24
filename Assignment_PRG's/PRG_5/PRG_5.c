#include<stdio.h>
#include<math.h>

int main()
{
    float x=2.5;
    int y=3,w=5;
   int result=floor(x);//floor
    printf(" The floor value :%d\n",result);//floor
    int z=ceil(x);
    printf("The ceil value is:%d\n",z);
    int f=pow(w,y);
    printf("The pow value is:%d\n",f);
    float a=f abs(x);
    printf("The abs value is:%f\n",a);
    int d=fmax(y,w);
    printf("The max value is:%d\n",d);
     int e=fmin(y,w);
    printf("The min value is:%d\n",e);
    return 0;
}
