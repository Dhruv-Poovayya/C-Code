/*WAP to read a string and print the number of times a given character appears.*/
#include<stdio.h>
int main()
{
    char str[100];
    char val;
    int  counter=0;

    printf("Enter a string:");
    fgets(str,100,stdin);

    printf("\n\nEnter the character:");
    scanf("%c",&val);
//printf("%c",val);

    for(int i=0; str[i]!=0; i++)
    {
        if(str[i]==val)
        {

            counter++;
        }
    }

    if(counter==0)
    {
        printf("\n\nCharacter NOT FOUND!!\n");
    }
    else
    {
        printf("\n\ncharacter %c is present %d times\n\n",val,counter);
    }
    return 0;
}
