/*Simple calculator using Functions*/
#include<stdio.h>
#include<math.h>

float Simple_Calulator(float a, float b,char oper);
int main()
{
    float a=0,b=0;
    float result=0;
    char oper;
    while(1)
    {
        printf("Enter the first operand:\n");
        scanf("%f",&a);
        printf("Enter the Second operand:\n");
        scanf("%f",&b);
        printf("Enter the operator:\n");
        scanf(" %c",&oper);//line includes a space before %c to ignore any leading whitespace characters, including the newline character from the previous input.
        result=Simple_Calulator(a,b,oper);
        printf("\nThe result is:%.2f\n\n",result);
    }
    return 0;

}
float Simple_Calulator(float a,float b, char oper)
{
    float result=0;
    switch(oper)
    {
    case '+' :
        result=a+b;
        break;
    case '-' :
        result=a-b;
        break;
    case '*' :
        result=a*b;
        break;
    case '/' :
        result=a/b;
        break;
    case '%' :
        result=fmod(a,b);
        break;
    case 'm':
        result=fmax(a,b);
        break;
    default :
        printf("Enter an Valid operator!!");
    }

    return result;
}

