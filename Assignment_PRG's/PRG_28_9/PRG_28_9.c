/*To Convert  Celsius to Fahrenheit  and Vice Versa*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float cel;
    double far;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&cel);
    far=((1.8*cel)+32);
    printf("Temp in Fahrenheit is %lf\n",far);
    cel=((far-32)/1.8);
    printf("Temp in Celsius %f",cel);
    return 0;
}
