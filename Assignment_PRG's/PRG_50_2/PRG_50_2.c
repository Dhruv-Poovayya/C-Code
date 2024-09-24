/* Function to multiply integer and Floating point val*/
#include<stdio.h>
float product(int num1,float num2); // Function Declaration
int main()
{
    int num1;
    float num2;
    float result;
   // while(1)
   // {
        printf("Enter an Integer:");
        scanf("%d",&num1);
        printf("Enter an Floating  point number:");
        scanf("%f",&num2);
        result=product(num1,num2); // Function Call
        printf("The product of integer %d and floating point number %.2f is %.2f\n\n",num1,num2,result);
   // }
    return 0;
}

float product(int num1,float num2)
{
    float result;// Local Variable
    result=num1*num2;
    return result;// Function return

}
