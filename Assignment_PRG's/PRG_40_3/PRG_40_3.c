/*To check whether entered letter is an Vowel or NOT */
#include<stdio.h>
int main()
{
  unsigned char alpha;
  printf("Enter an Letter:");
  scanf("%c",&alpha);
  if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
    printf("\nIts is an Vowel");
// else if(alpha=="%d",alpha)
// printf("Enter an letter");
 else
    printf("\nThe letter is an consonant\n");

 printf("\n--------------------------Method-2---------------------\n");

switch(alpha)
{
case 'a' :
    printf("Its an Vowel");
    break;
case 'e' :
    printf("Its an Vowel");
    break;
case 'i' :
    printf("Its an Vowel");
    break;
case 'o' :
    printf("Its an Vowel");
    break;
case 'u' :
    printf("Its an Vowel");
    break;
default :
    printf("Entered letter is an Consonant");
}
  return 0;
}
