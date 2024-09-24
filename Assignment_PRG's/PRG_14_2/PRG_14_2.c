/*Print the ASCII value of any key press.*/
#include<stdio.h>
int main()
{
    char key='!';
    printf("Enter a Key:");
    scanf("%C",&key);
    printf("\nThe ASCII value of Pressed Key is :%d\n",key);
    return 0;
}


