/*WAP to count the space, vowels and consonants from a string.*/
#include<stdio.h>
int main()
{
    char str1[15];
    int Space_counter=0;
    int Vowel_counter=0;
    int Consonant_counter=0;
    int length=0;
    printf("Enter the string:");
    fgets(str1,25,stdin);

    //LENGTH OF STRING.
    for(int i=0; str1[i]!='\0'; i++)
    {
        length++;
    }
    printf("STRING LENGTH:%d\n",length);

    // COUNT VOWELS AND SPACE IN STRING.

    for(int i=0; i<length-1; i++)
    {
        if(str1[i]==' ')
        {
            Space_counter++;
        }

        else if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||
                str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
        {
            Vowel_counter++;
        }

        else
        {
            Consonant_counter++;
        }
    }


    printf("\nThe number of  Space:%d\n",Space_counter);
    printf("\nThe number of Vowels:%d\n",Vowel_counter);
    printf("\nThe number of Consonant:%d\n",Consonant_counter);
    return 0;
}
