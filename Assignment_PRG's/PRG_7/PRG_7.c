#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1;
    float num2;
    unsigned char alpha[10];
    long int num3;
    unsigned long int num4;

    printf("Enter an Integer:");
    scanf("%d",&num1);
    printf("int is %d\n",num1);

    printf("Enter an Floating point number:");
    scanf("%f",&num2);
    printf("float is %f\n",num2);

    printf("Enter an Character:");
    scanf("%s",&alpha);
    printf("unsigned char is %s\n",alpha);

    printf("Enter an long Integer:");
    scanf("%ld",&num3);
    printf("long int is %1d\n",num3);

    printf("Enter an unsinged long Integer:");
    scanf("%u",&num4);
    printf("unsigned long int %u\n",num4);

    return 0;
}




