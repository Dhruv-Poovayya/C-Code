/*Number is even or Odd */
#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter an Number:");

    scanf("%d",&a);
    (a%2==0)?(printf("The number is even\n")):(printf("The number is odd\n"));

    c=a&1; // Last bit of even number is always zero when Bitwise AND result is Zero.

    printf("%d",c);
    return 0;
}
