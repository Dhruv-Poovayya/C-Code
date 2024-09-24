/*Radius of circle */
#include<stdio.h>
#define PI 3.14159
int main()
{
    float radius,area;
    printf("Enter the Radius of Circle:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("The area of the Circle is %f",area);
    return 0;
}
