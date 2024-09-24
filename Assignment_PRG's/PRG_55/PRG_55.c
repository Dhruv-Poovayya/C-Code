/* To covert decimal to binary */
#include<stdio.h>
int main()
{
    int num,j=1;
    int bin=0;
    int rem,quo;
    printf("Enter the value of number:");
    scanf("%d",&num);
    while(num!=0) //  loop will run until the number becomes 0.
    {
        rem=num%2;
        quo=num/2; // or num =num/2
        num=quo;
        bin+=rem*j;
        //printf("%d\n",bin);
       j*=10;// to print in correct order each time multiplied by multiples of 10 so that first obtained remainder is pushed to LSB position

    }
          printf("%d",bin);
    return 0;
}

























/*#include <stdio.h>

int main()
{
    int num, i = 0;
    int rem[32]; // Array to store binary digits, assuming a 32-bit integer

    printf("Enter the value of number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0\n");
        return 0;
    }


    while (num != 0)
    {
        rem[i] = num % 2; // Get the remainder (binary digit)
        num = num / 2; // Update num to the quotient
        i++;
    }

    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }
    printf("\n");

    return 0;
}
*/



































