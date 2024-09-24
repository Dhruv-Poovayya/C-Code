/* TO check two characters are same even if they are uppercase and lower case*/
#include <stdio.h>
int main()
{
    char char_1,char_2;
    int alpha1,alpha2;
    printf("Enter the First character:");
    scanf("%c",&char_1);
    printf("Enter the Second character:");
    scanf(" %c",&char_2);
    alpha1=char_1;
    alpha2=char_2;

    (alpha1-alpha2==32||alpha1-alpha2==-32)? printf("Both the characters are same\n"):((alpha1-alpha2==0)? printf("Both the characters are same\n"):printf("The entered characters are different\n"));

    return 0;

}

