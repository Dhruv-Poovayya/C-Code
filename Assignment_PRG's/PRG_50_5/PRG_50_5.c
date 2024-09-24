/* Write a function that displays ‘n’ prime numbers.*/
#include<stdio.h>
int check_prime(int num,int n);
int main()
{
  int num,n;
  printf("Enter the Starting number:");
  scanf("%d",&num);
  printf("Enter the nth value");
  scanf("%d",&n);
  if(num%2==0)
  {
      num+=1;
  }
  else
  {
    num=num;
  }
  check_prime(num,n);
  return 0;
}



int check_prime(int num,int n)
{
    int i;
    for(i=num;i<num+(n*2);i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
 return 0;
}

