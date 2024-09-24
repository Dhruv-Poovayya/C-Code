/*Read a string and print its length using strlen(), print its size using size of */

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25];
    int size=0;
    int length=0;
    printf("Enter the string:");
    fgets(s1,25,stdin);
    size=sizeof(s1)/sizeof(s1[0]);
    length=strlen(s1);
    printf("The size of string s1 is %d and length of String S1 is %d",size,length);

return 0;
}
