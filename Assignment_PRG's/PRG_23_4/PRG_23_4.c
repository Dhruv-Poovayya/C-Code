/*To input the length and breadth of a rectangle and calculate its perimeter and area*/
#include<stdio.h>
int main()
{
    int perimeter,area;
    int len,wid;
    printf("Enter the Length of the rectangle ");
    scanf("%d",&len);
    printf("Enter the Width of the rectangle ");
    scanf("%d",&wid);
    area=(len*wid);
    perimeter=2*(len+wid);
    printf("The area of Rectangle is %d\n",area);
    printf("The perimeter of Rectangle is %d\n",perimeter);
    return 0;
}
