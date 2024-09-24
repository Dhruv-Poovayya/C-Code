///* TO PRINT N PRIME NUMBERS *///
#include<stdio.h>
int prime_print(int n);
int main()
{

    int n=0;
    int prime=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("1 2 "); // Since two is exceptional case.
    prime_print(n);
    return 0;
}
int prime_print(int n)
{
    for(int i=3; i<(n*3)-2; i++)
    {
        if(i%2!=0)
        {
            if(i>7)  // Because till 7 all odd numbers are prime
            {
                if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
                {
                    printf("%d ",i);
                }
            }
            else
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}




//#include <stdio.h>
//#include <stdbool.h>
//
//bool check_prime(int num);
//
//int main() {
//    int num;
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if (check_prime(num)) {
//        printf("The entered number is Prime\n");
//    } else {
//        printf("The entered number is not Prime\n");
//    }
//    return 0;
//}
//
//bool check_prime(int num) {
//    if (num <= 1) {
//        return false;
//    }
//    if (num == 2) {
//        return true;
//    }
//    if (num % 2 == 0) {
//        return false;
//    }
//    for (int i = 3; i * i <= num; i += 2) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}

