/*Write a function to find the volume of a sphere of given radius.*/
#include<stdio.h>
#include<math.h>
float sphere_vol(float r);
int main()
{
    float radius,volume;
    printf("Enter the radius:");
    scanf("%f",&radius);
    volume=sphere_vol(radius);
    printf("The volume of the give sphere is:%.2f",volume);
    return 0;
}

float sphere_vol(float r)
{
    float volume;
    volume=(4.0/3.0)*M_PI*(r*r*r);
    return volume;
}
