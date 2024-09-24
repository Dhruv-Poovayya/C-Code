///*#include<stdio.h>
//int main()
//{
//  _Bool result;
//   int a=5,b=5;
//   result=(a==b);
//   printf("%d=%d is :",a,b,result);
//   return 0;*/
//#include<stdio.h>
//int main()
//{
//    int a,b,rem,quo;
//    while(1)
//    {
//        printf("Enter the value of number:");
//        scanf("%d",&a);
//        printf("Enter the value of number:");
//        scanf("%d",&b);
//        rem=a%b;
//        quo=a/b;
//        printf("%d\n\n",rem);
//        printf("%d\n\n",quo);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int Largest=matrix[0][0];
//    int smallest=matrix[0][0];
//    printf("%d",Largest);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a[5]= {"Hi"};
//    for(int i=0; i<5; i++)
//        for(int j=i+1; j<5; j++)
//        {
//            if(a[i]>a[j])
//            {
//               int temp=a[j];
//                a[j]=a[i];
//                a[i]=temp;
//            }
//        }
//    for(int i=0; i<5; i++)
//    {
//        printf("%d \v",(int)a[i]);
//    }
//    return 0;
//}
//
//
//
//
//
//#include <stdio.h>
//
//void convertToTitle(int columnNumber, char* result)
//{
//    int index = 0;
//
//    while (columnNumber>0)
//    {
//        columnNumber--; // Decrease columnNumber by 1 to handle 'A' to 'Z' range
//        result[index++] = (char)(columnNumber % 26 + 'A');
//        columnNumber /= 26;
//    }
//
//    result[index] = '\0'; // Null-terminate the string
//
//    // Reverse the result string as the characters are stored in reverse order
//    for (int i = 0; i < index / 2; i++)
//    {
//        char temp = result[i];
//        result[i] = result[index - i - 1];
//        result[index - i - 1] = temp;
//    }
//
//}
//
//int main()
//{
//    int columnNumber;
//    printf("Enter the column number: ");
//    scanf("%d", &columnNumber);
//
//    char columnTitle[20]; // Fixed size array for the result
//
//    convertToTitle(columnNumber, columnTitle);
//    printf("The corresponding column title is: %s\n", columnTitle);
//
//    return 0;
//}
//
//
//
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char a[32];
//    char b[32];
//    char result[33];
//    int sum = 0;
//    int carry = 0;
//
//    printf("Enter a binary number: ");
//    fgets(a, 32, stdin);
//    printf("Enter another binary number: ");
//    fgets(b, 32, stdin);
//
//    // Remove newline character from the end of input strings
//    a[strcspn(a, "\n")] = '\0';
//    b[strcspn(b, "\n")] = '\0';
//
//    int len_a = strlen(a);
//    int len_b = strlen(b);
//
//    int i = len_a - 1; // Because index starts from 0.
//    int j = len_b - 1;
//    int k = (len_a > len_b) ? len_a : len_b; // max(len_a, len_b)
//
//    for(int i=0; i<k;i++)
//    {
//        result[i]='0';
//    }
//    result[k + 1] = '\0';
//
//    while (i >= 0 || j >= 0 || carry) { // carry is considered because MSB's bits addition may generate a carry
//        int bit_a = (i >= 0) ? a[i--] - '0' : 0;
//        int bit_b = (j >= 0) ? b[j--] - '0' : 0;
//
//        sum = bit_a + bit_b + carry;
//
//        result[k--] = (sum % 2) + '0'; // Store '0' or '1'
//
//        carry = sum / 2; // 1+1-> sum = 2, so carry = 1.
//    }
//
//    // Use an if statement to handle a single leading zero
//    if (result[0] == '0' && result[1] != '\0') {
//        printf("Result: %s\n", result + 1);
//    } else {
//        printf("Result: %s\n", result);
//    }
//
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int *ptr;
//    int a=0,sum=0;
//    int n=0;
//    ptr=&a;
//    printf("Enter the number of elements:");
//    scanf("%d",&n);
//    printf("Enter the elements:");
//    for(int i=0; i<n; i++)
//    {
//        scanf("%d",ptr);
//        printf("The input elements is %d \n",*(ptr[i]));
//    }
//o
//    printf("The sum of n elements is:");
//    for(int i=0; i<n; i++)
//    {
//        sum=sum+*(ptr+i);
//    }
//    printf("%d",sum);
//    return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int arr[]={3000,4000,5000,69999,544544,200020002};
//    int size= sizeof(arr)/sizeof(arr[0]);
//    int *ptr=arr;
//    int max=0;
//    printf("The size of array:%d\n",size);
//    for (int i=0;i<size;i++)
//    {
//        if(*(ptr+i)>max)
//            max=*(ptr+i);
//    }
//    printf("The max val is %d",max);
//return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//
//    int n=0;
//    printf("Enter the number of elements:");
//    scanf("%d",&n);
//
//    int *ptr=(int*)malloc(n*sizeof(int));
//    printf("Enter the elements of array:\n");
//    for(int i=0; i<n; i++)
//        scanf("%d",(ptr+i));
//
//    printf("\nThe array elements are:\n");
//    for(int i=0; i<n; i++)
//        printf("%d\t",*(ptr+i));
//
//    printf("\n\nEnter the new size:");
//    int newsize;
//    scanf("%d",&newsize);
//    ptr=(int*)realloc(ptr,newsize*sizeof(int));
//
//        printf("\n\nEnter the new-elements of array:\n");
//    for(int i=n; i<newsize; i++)
//        scanf("%d",(ptr+i));
//
//    printf("\nThe array elements are:\n");
//    for(int i=0; i<newsize; i++)
//        printf("%d\t",*(ptr+i));
//}
//
//
//
//
//
//#include<stdio.h>
//int main()
//
//{
//    char num1[2]="2";
//    char num2[2]="1";
//
//    int numb1=atoi(num1);
//    int numb2=(int)num2;
//
//    printf("d",numb1);
//return 0;
//}
//
//
//
//
//
//
//
//#include<stdio.h>
//int main()
//{
//
//{
//    int n;
//
//    for(int i=1;i<=2;i++)
//    {
//        for(int n=5;n>i;n--)
//        {
//            printf(" ");
//        }
//
//        for(int j=1;j<=i;j++)
//        {
//            printf(" 1");
//        }
//
//        n--;
//    printf("\n");
//    }
//
//    for(int i=2;i<5;i++)
//    {
//        for(int n=3;n>i;i++)
//        {
//            printf(" ");
//        }
//        for(int j=2;j<i;j++)
//        {
//            k=val();
//            printf("%d",k);
//        }
//
//        n--;
//        printf("\n");
//    }
//
//
//    int val()
//
//
//
//
//
//
//
//
//
//
//
////#include<stdio.h>
////int main()
////{
////    char input[]="1234.65";
////
////    int num;
////    float fnum;
////
////    sscanf(input,"%d %f",&num,&fnum); // Scanf's input from string not from console
////    printf("Intger:%d,Float:%f",num,fnum);
////
////    return 0;
////}
//
//
//#include<stdio.h>
//int main()
//{
//    char store[50];
//    int number=100;
//    float score=99.5;
//    char letter='a';
//
//    sprintf(store,"Number:%d , score:%.2f,letter:%c",number,score,letter);
//    printf("store:%s",store);
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//    char str[10]="Hello";
//
//    int len=strlen(str);
//int count=0;
//    for( int i=0;str[i]!='\0';i++)
//    {
//        count++;
//    }
//    printf("%d\n",count);
//
//    for(int i=0;i<len/2;i++)
//    {
//       char   temp=str[i];
//        str[i]=str[len-i-1];
//        str[len-i-1]=temp;
//
//    }
//
//printf("%s",str);
//    return 0;
//
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//    int a=10; // val a=10; address of a=0x100;
//
//    int *ptr=&a; // ptr store = 0x100; , ptr address = 0x200.
//    int **ptr1=&ptr; // ptr1 = address of ptr 200.
//    printf("%d",**ptr1);
//    return 0;
//}
//
//*ptr1 -> 0x200->(inside)
// 0X200->0x100;
// **ptr1-> 0x100->(inside)=10;
//
//

#include<stdio.h>
int main()
{
//char result='a'-32;
////scanf("%c",&result);
//char ACSII_val=result;
//printf("%c",ACSII_val);;

    char alpha1, alpha2;

    // Read two characters from the user
    printf("Enter first character: ");
    scanf(" %c", &alpha1);

    printf("Enter second character: ");
    scanf(" %c", &alpha2);

    // Convert alpha1 to uppercase if it's lowercase
    if (alpha1 >= 'a' && alpha1 <= 'z')
    {
        alpha1 = alpha1 - ('a' - 'A');
    }

    // Convert alpha2 to uppercase if it's lowercase
    if (alpha2 >= 'a' && alpha2 <= 'z')
    {
        alpha2 = alpha2 - ('a' - 'A');
    }

    // Check if the characters are the same
    if (alpha1 == alpha2)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}

