/*To read a string called name and pass the value to a function that prints "Hello <name>I!".*/
#include<stdio.h>
#include<stdlib.h>
char wish(char name[]);// Function Declaration
int main()
{
    char name[10];
    printf("Enter the name:");
    scanf("%s",name);
    wish(name); // No need mention data type while passing parameter.
    return 0;
}

char wish(char name[])
{
    printf("Hello <%s>!!",name);
    return 0     ;
}

