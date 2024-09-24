/*WAP to check if two given strings are the same*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    char s2[10];
    int x=0;
    printf("Enter the String 1");
    gets(s1);
    printf("Enter the String 2");
    gets(s2);
    x=strcmp(s1,s2);
    printf("%d",x);
    return 0;

}
