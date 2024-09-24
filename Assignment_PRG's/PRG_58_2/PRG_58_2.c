/* Function Takes an argument but returns no Value*/
#include<stdio.h>

void simple_calculator(char oper);
float add(float a,float b);
float sub(float a,float b);
float multi(float a,float b);
float div(float a,float b);
void  greet();


int main()
{
    char oper;
    while(1)
    {
    greet();
    printf("\n\nEnter the operator:");
    scanf(" %c",&oper);
    simple_calculator(oper);
    }
    return 0;
}


void greet()
{
    printf("\nHello!!,Enjoy your calculation!!\n ");
}

simple_calculator(char oper)
{
    float a=0;
    float b=0;
    printf("Enter the value of Operand 1:");
    scanf(" %f",&a);
    printf("Enter the value of Operand 2:");
    scanf(" %f",&b);
    switch(oper)
    {
    case '+':
        add (a,b);
        break;
    case '-':
        sub( a,b);
        break;

    case '*':
        multi(a,b);
        break;

    case '/':
        div(a,b);
        break;

    }
}


float add(float a,float b)
{
    printf("%.3f\n",a+b);
}
float sub(float a,float b)
{
    printf("%.3f\n",a-b);
}
float multi(float a,float b)
{
    printf("%.3f\n",a*b);
}
float div(float a,float b)
{
    if(b!=0)
    {
        printf("%.3f\n",a/b);
    }
    else
        printf("Zero Division Error!!");
}
