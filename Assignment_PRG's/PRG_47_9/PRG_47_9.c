/* TO find a triangle is Equilateral, Isosceles,Scalene */
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the Sides of an Triangle:\n");
    scanf("%f %f %f",&a,&b,&c);

    if((a==b)&&(b==c)&&(a==c))
        printf("The Triangle is an Equilateral Triangle\n");

    else if ((a==b&&b!=c)||(b==c&&a!=c)||(a==c&&b!=c))
        printf("The Triangle is an Isosceles Triangle\n");
    else
        printf("The Triangle is an Scalene Triangle\n");

}
