/*WAP to implement read a string s1 and copy it to another string s2
and then display it*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[150]={"Hello"};
    char s2[150];
    printf("%s\n",s1);
    printf("Enter the STRING TO BE COPIED:");
    fgets(s2,150,stdin);
    printf("The copied string is:%s",strcpy(s1,s2));
    printf("%s",s1);


return 0;

}
