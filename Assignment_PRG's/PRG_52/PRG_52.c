/*To find the Largest of 3 numbers without using library functions and if statement*/
#include<stdio.h>
int greatest_finder(int,int,int);
int main()
{
    int a,b,c;
    int max=0;
    while(1)
    {
        printf("Enter the value of integers:\n");
        scanf("%d %d %d",&a,&b,&c);
        max=greatest_finder(a,b,c);//Function call
        printf("\n\nThe greatest of three numbers is:%d\n\n",max);
    }

    return 0;
}


int greatest_finder(int a,int b, int c)
{
    int max=0;
    max = ((a>b&&a>c)*a)+((b>a&&b>c)*b)+((c>a&&c>b)*c); // Relational operator return 1 or 0.
    return max;
}
