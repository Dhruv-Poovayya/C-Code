/* TO find the greatest number out of 3 number */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
        printf("%d is the Greatest Integer",a);
    else if(b>a&&b>c)
        printf("%d is the Greatest Integer",b);
    else
        printf("%d is the Greatest Integer",c);
    return 0;
}
