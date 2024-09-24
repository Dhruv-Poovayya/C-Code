/*WAP to replace the spaces of a string with a specific character*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50];
    int count = 0;

    // Read input string
    fgets(s1, sizeof(s1), stdin);

    // Remove the newline character if present
   int  len = strlen(s1);
    if (len > 0 && s1[len-1] == '\n')
    {
        s1[len-1] = '\0';
    }

    // Replace spaces with underscores and count replacements
    for(int i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] == ' ')
        {
            s1[i] = '_';
            count++;
        }
    }

    // Print the modified string and the count of replacements
    printf("%s\n", s1);
    printf("%d\n", count);

    return 0;
}

