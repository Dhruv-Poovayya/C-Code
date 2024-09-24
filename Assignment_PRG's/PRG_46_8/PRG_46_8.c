
#include<stdio.h>
int main()
{
    float a,b,c,d;
    float x1,x2;
    printf("Enter values  of the coefficients:\n");
    scanf("%f %f %f",&a,&b,&c);

    x1=sqrt((b*b)-(4*a*c));  // d= (b*b)-(4*a*c) so x1= (-b+sqrt(d))/(2*a)
    x1=(-b-x1);
    x1=x1/(2*a);

    x2=sqrt((b*b)-(4*a*c)); // d= (b*b)-(4*a*c) so x2= (-b-sqrt(d))/(2*a)
    x2=(-b+x2);
    x2=x2/(2*a);

    printf("The solutions of the quadratic equation are (%.2f,%.2f)\n",x1,x2);


    printf("\n--------------------Alternative-Method------------------------\n");
    d= (b*b)-(4*a*c);
    x1=(-b+sqrt(d))/(2*a);
    printf("%f",x1);

    return 0;
}
