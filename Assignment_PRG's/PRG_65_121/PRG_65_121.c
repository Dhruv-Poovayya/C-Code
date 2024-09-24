#include<stdio.h>
int main()
{
    char str[25];
    char temp[25];
    printf("Enter the string:");
    fgets(str,25,stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]>str[j]) // ASCENDING ORDER -------> if(str[i]<str[j]).
            {
                temp[i]=str[j];
                str[j]=str[i];
                str[i]=temp[i];
            }
        }
    }
    printf("%s",str);
    return 0;
}
