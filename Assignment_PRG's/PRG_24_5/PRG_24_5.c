/*To input the side of a cube and calculate its surface area and volume.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int sur_area,vol;
    int a;
    printf("Enter the side of cube:");
    scanf("%d",&a);
    sur_area=6*pow(a,2);
    vol=pow(a,3);
    printf("The Surface area of the cube is:%d\n",sur_area);
    printf("The Volume of cube is:%d\n",vol);
    return 0;
}
