/*Prints the message "Hello World" if a macro "DEBUG_EN" is defined, else prints "Goodbye" on the console*/
#include<stdio.h>
//define DEBUG_EN 1
int main()
{
#ifdef DEBUG_EN
    printf("Hello World!\n");
#if DEBUG_EN==0
    printf("DEBUG is val=0");
#else DEBUG_EN==1
    printf("DEBUG val is not equal to 0");
#endif // DEBUG_EN
#endif // DEBUG_EN

#ifndef DEBUG_EN
    printf("GoodBYE!!");
#endif // DEBUG_EN


    return 0;
}
