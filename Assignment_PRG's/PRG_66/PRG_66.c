/*Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 */


#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char str[35];
    int result=0,output=0;
    int j=0;
    printf("Enter the column title:");
    fgets(str,35,stdin);

   // Remove newline added by fgets()
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
        }
    }

    result=strlen(str);
    printf("%d\n",result);

    // Title to Number conversion

    for(int i=result-1;i>=0;i--)
    {
         str[i]=toupper(str[i]);
        output+=(str[i]-'A'+1)*pow(26,j);
        j++;
    }


    printf("The number is %d for column title %s\n",output,str);
           return 0;

}
