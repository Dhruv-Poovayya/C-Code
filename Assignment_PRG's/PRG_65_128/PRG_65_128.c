#include<stdio.h>
#include<stdbool.h>

int main()
{
    char S_str[25];
    char T_str[25];
    char temp[25];
    int i=0;
  // _Bool flag=true;
   int count1=0;
   int count2=0;

    printf("Enter  string 1:");
    fgets(S_str,25,stdin);
    printf("Enter  string 2:");
    fgets(T_str,25,stdin);

    for (i=0; T_str[i]!=0; i++)
    {
        for(int j=i+1; T_str[j]!=0; j++)
        {
            if(T_str[i]>=T_str[j])
            {
                temp[i]=T_str[j];
                T_str[j]=T_str[i];
                T_str[i]=temp[i];
            }
        }
    }
 T_str[i+1]='\0';

    printf("%s\n",T_str);

    for(i=0; S_str[i]!=0; i++)
    {
        for(int j=i+1; S_str[j]!=0; j++)
        {
            if(S_str[i]>=S_str[j])
            {
                temp[i]=S_str[j];
                S_str[j]=S_str[i];
                S_str[i]=temp[i];
            }
        }
    }
    S_str[i+1]='\0';

    printf("%s\n",S_str);
    for(int i=0; (T_str[i]!='\0'&&S_str[i]!='\0'); i++)
    {
        if(T_str[i] == S_str[i])
        {
           count1++;

        }
        else
        {
            count2++;
        }

    }

    if(count2==0) // EVEN IF Single Character is different count2 is incremented then its not an anagram.
    {
        printf("\nString T is  anagram of String S");
    }
    else
    {
        printf("\nString T is not anagram of String S");
    }

    return 0;
}
