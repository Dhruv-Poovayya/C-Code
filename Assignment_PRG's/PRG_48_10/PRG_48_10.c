/* TO check whether triangle can be formed with given lengths */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the lengths of the triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
        printf("Triangle can be formed\n");
    else
        printf("Triangle cannot be formed\n");
    return 0;
}
