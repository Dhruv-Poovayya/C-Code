/*WAP to read a string and then reverse it.*/

#include<stdio.h>
int main()
{
    char str1[]="POOVAYYA";
    char temp;
    int count=0;
    for(int i=0; str1[i]!='\0';i++)
    {
         count++;
    }
    for(int i=0; i<count/2; i++)
    {
        temp=str1[i];
        str1[i]=str1[count-i-1];
        str1[count-i-1]=temp;
    }
    //str2[j]='\0'; // print statement for string requires null.
    printf("THE REVERSED STRING \"%s\" ",str1);
    printf("\nThe length of string is:%d",count);
    return 0;


}
