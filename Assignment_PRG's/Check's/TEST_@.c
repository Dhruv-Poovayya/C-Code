/*Multiply two strings */

#include<stdio.h>
int main()
{
    char num1[]="10";
    char num2[]="10";
    char result[10];

    int str1=0;
    int str2=0;

// to convert 1st character array to integer.

    for(int i=0; num1[i]!='\0'; i++)
    {
        str1=str1*10+(num1[i]-48); // 48 is ascii val of 0
    }

    printf("1st str to integer :%d\n",str1);


// To convert second char array to integer.
for(int i=0;num2[i]!='\0';i++)
{
    str2=str2*10+(num2[i]-'0');// -'0' to convert char to digit

}
printf("2nd str to integer:%d\n",str2);

// Multiplication of two integers.

str1=str1*str2;
printf("Final integer multiplication:%d\n",str1);



// Extract each digit and store to char array called result.
int i=0; // index for result array.

while(str1!=0)
{
    printf("\nEntered the loop:\n");  // mod 10 extract number,  /10 to remove extracted bit .

    result[i]=(str1%10)+'0'; // to convert to digit to char either +48 or +'0'
    printf("%c\n",result[i]);
    str1/=10;
    i++;// incrementing index of result array.
}

printf("Extracting single digit and storing to array:%s\n",result);




// String length to reverse string , because its in reversed from above
int count=0;
for(int i=0;result[i]!='\0';i++)
{
    count++; // Length of result array, useful in reversing string.
}
result[count]='\0';// Padding Null character.



printf("------------------\n");


// Reversing storing final digit to result[]
for(int i=0; i<count/2;i++)
{
    char temp=result[i];
    result[i]=result[count-i-1];
    result[count-i-1]=temp;

}


printf("The final string:%s\n",result);

    return 0;
}
