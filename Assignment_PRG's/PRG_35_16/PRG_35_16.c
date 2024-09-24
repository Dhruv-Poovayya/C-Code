/*To calculate compound interest.*/
#include<stdio.h>
int main()
{
    float amt,pr,t,n,rate,CI;
    float temp;
    printf("Enter the Principal Amt:");
    scanf("%f",&pr);

    printf("Enter the Time:");
    scanf("%f",&t);

    printf("Enter the number of times interest compounded per year Amt:");
    scanf("%f",&n);

    printf("Enter the Rate:");
    scanf("%f",&rate);

    rate=rate/100;
    temp= pow((1+(rate/n)),(n*t));

    printf("%f\n",temp);

    amt=pr*temp;
    printf("%f\n",amt);

    CI=amt-pr;
    printf("%f\n",CI);

    return 0;
}
