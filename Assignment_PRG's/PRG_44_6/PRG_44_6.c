/*TO enter the points and Finds its Quadrant*/
#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the value of X:");
    scanf("%f",&x);
    printf("Enter the value of y:");
    scanf("%f",&y);
    if(x>0&&y>0)
        printf("(%.1f,%.1f) lies in the 1st quad",x,y);
    else if(x<0&&y>0)
        printf("(%.1f,%.1f) lies in the 2nd quad",x,y);
    else if(x<0&&y<0)
        printf("(%.1f,%.1f) lies in the 3rd quad",x,y);
    else if(x>0&&y<0)
        printf("(%.1f,%.1f) lies in the 4th quad",x,y);
return 0;
}
