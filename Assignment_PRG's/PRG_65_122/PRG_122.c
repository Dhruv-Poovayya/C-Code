/* WAP to capitalize all vowels in a string.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    printf("Enter a string:");
    fgets(str1,50,stdin);
    for(int i=0;str1[i]!=0;i++)
    {
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||
           str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
           {
               str1[i]=toupper(str1[i]);
           }
    }
    printf("%s",str1);
    return 0;
}
