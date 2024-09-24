/*2 coordinate points on a 2D plane and calculate the slope of the line joining them.*/
#include<stdio.h>
int main()
{
    float x1,x2,y1,y2;
    float slope;
    printf("The coordinates of X is:\n");
    scanf("%f %f",&x1,&x2);
    printf("The coordinates of Y is:\n");
    scanf("%f %f",&y1,&y2);
    slope=((y2-y1)/(x2-x1));
    printf("The slope is:%f",slope);

}
