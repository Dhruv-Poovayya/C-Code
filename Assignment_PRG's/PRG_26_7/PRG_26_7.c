/*To Find the Greatest Among Three numbers*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b,c \n");
    scanf("%d %d %d",&a,&b,&c);
    (((a>b)&&(a>c))?(printf("a is greatest number\n")):((b>c)?(printf("B is the greatest number\n")):(printf("C is the greatest number\n"))));
    return 0;
}
