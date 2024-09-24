#include<stdio.h>
int main(){

    int num1=8,num2=3;
    int sum,diff,product,quotient,remainder;
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    remainder=num1%num2;
    printf("The sum of a and b is:%d\n",sum);
    printf("The diff of a and b is:%d\n",diff);
    printf("The product of a and b is:%d\n",product);
    printf("The quotient of a and b is:%d\n",quotient);
    printf("The remainder of a and b is:%d\n",remainder);
    return 0;
}
