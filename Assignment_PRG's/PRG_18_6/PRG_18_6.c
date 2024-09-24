/*Swap two numbers without using an intermediate variable-Method 1 and METHOD 2*/
#include<stdio.h>
int main()
{
    int x=456;
    int y=576;
    printf("The initial value of x is %d and y is %d\n\n",x,y);
    printf("The swapped value of x is %d and of y is %d\n\n",y,x);

    printf("------------------METHOD-2----------------------\n\n");

    int u=456;
    int v=576;
    printf("The initial value of u is %d and v is %d\n\n",u,v);
    v=u;
    u=u+120;
    printf("The swapped value of u is %d and of v is %d\n\n",u,v);

    return 0;
}

