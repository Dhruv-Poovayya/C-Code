/*To Check Entered value is an Alphabet or Digit or Special Character*/
#include<stdio.h>
int main()
{
    unsigned char key;
    int val;
    printf("Press a Key:");

    scanf("%c",&key);// Key stores the letter or Special char or Number in  Character format.
    val=key;// when key is assigned to variable val of type int the char stored in key is converted into its ASIIC value and then assigned to variable val

    //printf("%d",val);

    if(val>=65&&val<=90)
        printf("The entered key is an UPPER CASE LETTER");

    else if (val>=97&&val<=122)
        printf("The entered key is an LOWER CASE LETTER");
    else if (val>=48&&val<=57)
        printf("The entered key is an Number");
    else
        printf("The entered value is an Special character");
    return 0;

}
