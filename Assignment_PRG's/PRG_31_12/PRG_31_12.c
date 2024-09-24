/*To check if a given positive number is a multiple of 3 or a multiple of 7,12*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a positive number:");
    scanf("%d",&num);
    (((num%3==0)&&(num%12==0))?(printf("Multiple of 3 and 12")):((num%7==0)?(printf("Multiple of 7")):(printf("Neither Multiple 3 nor 7 and 12"))));
    return 0;
}
