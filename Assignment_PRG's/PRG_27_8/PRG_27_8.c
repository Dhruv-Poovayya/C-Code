/*To read two alphabets and check if they are equal */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char alpha1,alpha2;
    printf("Enter two letter\v");
    scanf("%c %c",&alpha1,&alpha2);
    ((alpha1==alpha2)?(printf("The letters are same")):(printf("The letters are different")));
    return 0;


}
