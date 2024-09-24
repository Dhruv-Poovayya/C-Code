#include <stdio.h>
int my_strcmp(const char *str1, const char *str2);



int main()
{
    char *keyword[] = {"int", "float", "double", "return", "char", "else", "if", "switch"};
    char val[25];
    printf("Enter a string: ");
    fgets(val, 25, stdin);

    // Remove the newline character if present
    for (int i = 0; val[i] != 0; i++)
    {
        if (val[i] == '\n')
        {
            val[i] = '\0';
        }
    }

    // Compare the input with keyword[1] without using strcmp
    int test = my_strcmp(val, keyword[1]) == 0;

    printf("%d\n", test);

    if(test==0)
    {
        printf("Entered word is a keyword!!");
    }

    return 0;
}

int my_strcmp(const char *str1, const char *str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}
