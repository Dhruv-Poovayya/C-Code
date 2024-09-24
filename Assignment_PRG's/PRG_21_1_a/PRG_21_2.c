/*To check Bitwise Operator*/
#include<stdio.h>
int main()
{
int a,b;
int res1,res2,res3,res4,res5;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
res1=a|b;
printf("Result of OR:%d\n",res1);
res2=a&b;
printf("Result of AND:%d\n",res2);
res3=a^b;
printf("Result of XOR:%d\n",res3);
res4=a>>b;
printf("Result of Right Shift:%d\n",res4);
res5=a<<b;
printf("Result of Left Shift:%d\n",res5);
return 0;
}
