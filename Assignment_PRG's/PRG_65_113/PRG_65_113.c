
/*Read a two  string and concatenate them  */
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25];
    char s2[25];
    printf("Enter the 1st string:");
    gets(s1);
    printf("Enter the 2nd string:");
    gets(s2);
    strcat(s1,s2);
    printf("The concatenated string is:%s ",s1);

    return 0;
}
