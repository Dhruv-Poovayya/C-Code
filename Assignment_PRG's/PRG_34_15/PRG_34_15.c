/*To calculate simple interest*/
#include<stdio.h>
int main()
{
    float SI,pr,t,r,total_amt;
    printf("Enter the Principal Amount:");
    scanf("%f",&pr);
    printf("Enter the Time:");
    scanf("%f",&t);
    printf("Enter the Rate:");
    scanf("%f",&r);
    SI=(pr*t*r)/100;
    printf("The Simple Interest is %f\n",SI);
    total_amt=pr+SI;
    printf("The Total-Amount is %f\n",total_amt);
    return 0;
}
