/*WAP to convert a string to uppercase*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    gets(s1);
    strupr(s1);// Function converts string to upper case
    printf("%s\n",s1);
    strlwr(s1); // Function converts string to lower case
    printf("%s\n",s1);
    strrev(s1); // To reverse string.
    printf("%s\n",s1);
    return 0;
}
