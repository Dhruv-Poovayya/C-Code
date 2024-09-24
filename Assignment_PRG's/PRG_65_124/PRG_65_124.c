/*TO REMOVE DUPLICATE CHARACTERS*/
#include<stdio.h>
int main()
{
    char str1[25];
    int i=0,j=0,k=0;

    printf("Enter the string:");
    fgets(str1,25,stdin);
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=i+1;str1[j]!='\0';j++)
        {
            if(str1[i]==str1[j])
            {
                for(int k=j;str1[k]!='\0';k++)
                {
                    str1[k]=str1[k+1];
                }
            }
            else
                j++;
        }
    }
    printf("%s",str1);
    return 0;

}

