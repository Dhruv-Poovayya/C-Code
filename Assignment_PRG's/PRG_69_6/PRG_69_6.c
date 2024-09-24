/* To count Vowels and consonant in string using pointer */

#include<stdio.h>
#include<string.h>

void vowel_constant_counter(char *string, int *count); //PASSING STRING AND COUNT AS POINTER

int main()
{
    char string[100];
    int count=0;
    printf("Enter the string:");
    fgets(string,100,stdin);
    for(int i=0; string[i]!='\0'; i++)
    {
        if(string[i]=='\n')
        {
            string[i]='\0';
        }
    }

    for(int i=0; string[i]!='\0'; i++)
    {
        count++;
    }

    vowel_constant_counter(string,&count); // PASSING THE ADDRESS OF COUNT, &--> IS NOT USED FOR STRING BECAUSE ARRAY AUTOMATICALLY DECAYS POINTER
    return 0;
}

void vowel_constant_counter(char *string,int *count)

{
    int vowel_cntr=0;
    int consonant_counter=0;

    for(int i=0; i<*count; i++) // COUNT VALUE IS DEREFRENCED OPERATOR
    {
        string[i]=toupper(string[i]);

        if(string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        {
            vowel_cntr++;
        }
        else
        {
            consonant_counter++;
        }
    }
    printf("The count of \"VOWELS\" is %d and \"CONSONANT\" IS %d",vowel_cntr,consonant_counter);

}
