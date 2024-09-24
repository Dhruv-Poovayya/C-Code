/* Calculate the length of string using pointer */
#include<stdio.h>
int main()
{
    char str[25]="Hello World!";
    int counter=0;
    int *ptr=&counter;

//    for(int i=0;str[i]!='\0';i++)
//    {
//        *ptr=*ptr+1;
//    }
//    printf("The sting is %s and its length is %d\n",str,*ptr);
/// or

    for(int i=0;str[i]!='\0';i++)
    {
        counter++;
    }
    printf("The sting is \"%s\" and its length is \"%d\"\n",str,*ptr);

    return 0;
}
