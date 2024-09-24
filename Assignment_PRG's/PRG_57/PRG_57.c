/* Armstrong Number Prg */
#include<stdio.h>
#include<math.h>

int armstrong_check(int l_digit[],int counter,int original_num);
int digit_extract(int num);

int main()
{
    int original_num;
    printf("Enter the value of num:");
    scanf("%d",&original_num);
    digit_extract(original_num);
    return 0;
}

int digit_extract(int num)
{
    int original_num;
    int l_digit[10];
    int counter=0;
    original_num=num;

    while(num!=0)
    {
        l_digit[counter]=num%10;                                                                                                                                 // To get each digit of a number from LSB.
        num/=10;                                                                                                                                                 // TO eliminate the obtained LSB and to extract the next number by passing num to line 10.
      //  printf("%d\n",l_digit[counter]);
        counter++;                                                                                                                                               // check counter increments on each division until number becomes zero so No of digits in a number can be obtained.
    }
    armstrong_check(l_digit,counter,original_num);
    return 0;
}

int armstrong_check(int l_digit[],int counter,int original_num)
{
    int arm_str=0;
    for(int i=0; i<counter; i++)
    {
        arm_str+=pow(l_digit[i],counter);
       // printf("\n%d\n",arm_str);

    }
    if(arm_str==original_num)
    {
        printf("\n%d-is an Armstrong\n",arm_str);
    }
    else
    {
        printf("\n%d-Not an Armstrong Number\n",arm_str);
    }
    return 0;
}
