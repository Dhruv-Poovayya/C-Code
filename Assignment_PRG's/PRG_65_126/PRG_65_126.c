/* BINARY ADDITION USING STRINGS */
#include<stdio.h>
#include<string.h>
int main()
{
    char a[32];
    char b[32];
    char result[33];
    int sum=0;
    int carry=0;

    printf("Enter the a Binary Number:");
    fgets(a,32,stdin);
    printf("Enter the a Binary Number:");
    fgets(b,32,stdin);

    int len_a= strlen(a)-1; // Gives String length excluding '\0', -1 because fgets adds a new line so strlen() becomes actual length+1
    int len_b=strlen(b)-1;
//
//    printf("%d\n",len_a);
//    printf("%d\n",len_b);

    int  i=len_a-1;  // Because index starts from 0.
    int  j=len_b-1;
    int  k=(len_a>len_b)?len_a:len_b;    //max(len_a,len_b);

//  TO SET COMPLETE ARRAY WITH CHAR 0
    for(int i=0; i<k; i++)
    {
        result[i]='0';
    }
    result[k+1]='\0';

//  printf("%d\n",j);
//    printf("%d\n",i);
//      printf("%d\n",k);


    while(i>=0 || j>=0 || carry)    // carry is consider because MSB' bits addition may generate a carry
    {
        int bit_a = (i>=0)? a[i--]-'0':0;
        int bit_b = (j>=0)? b[j--]-'0':0;


        sum=bit_a+bit_b+carry;

        result[k--]= (sum%2)+'0'; // incase in both bits are 1 then binary addition o/p is 0 so 1+1=2(arithmetic addition), (1+1)%2=0 (binary add condition satisfied).

        carry= sum/2;   // 1+1-> sum =0 and carry is 1 (in binary) , so (1+1)/2 = 1 i.e carry=1.
    }

    // Use an if statement to handle a single leading zero
    if (result[0] == '0' && result[1] != '\0')
    {
        printf("Result: %s\n", result + 1);
    }
    else
    {
        printf("Result: %s\n", result);
    }
    return 0;
}
