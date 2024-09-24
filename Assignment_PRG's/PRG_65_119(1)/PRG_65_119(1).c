/* TO FIND SUB-STRING IN A STRING */


#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char sub[100];

    printf("Enter the string:");
    fgets(str,100,stdin);
    printf("Enter the substring:");
    fgets(sub,100,stdin);

    // TO Eliminate New Line from string

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
        }
    }

    // TO Eliminate New Line from substring

    for(int i=0; sub[i]!='\0'; i++)
    {
        if(sub[i]=='\n')
        {
            sub[i]='\0';
        }
    }



    int len_str=strlen(str);
    int len_sub=strlen(sub);

    printf("\nSTRING Length:%d\n\n",len_str);
    printf("\nSUB-STRING Length:%d\n\n",len_sub);


    for(int i=0; i<=len_str-len_sub; i++)
    {
        for(int j=0; j<len_sub; j++)
        {
            if(str[i+j]!=sub[j])
            {
                break;
            }

            if(j==len_sub-1)
            {
                printf("\nTHE SUB-STRING \"%s\" is found at %d position of main String \"%s\"\n",sub,i,str);
                return 0 ;
            }
        }
    }

     printf("\nTHE SUB-STRING \"%s\" is NOT found in main String \"%s\"\n",sub,str);

    return 0;


}
