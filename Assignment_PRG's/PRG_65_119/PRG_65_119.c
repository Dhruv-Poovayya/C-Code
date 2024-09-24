#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int substr(char *str, char *sub);

int main(void)
{

    char str[] = "jkbsafbkjafbabfkj";
    char sub[] = "saff";

    int result = substr(str, sub);
    if (result > -1)
    {
        printf("%s found in %s at %d\n", sub, str, result);
    }
    else
    {
        printf("%s not found in %s\n", sub, str);
    }

    return 0;
}

int substr(char *str, char *sub)
{

    int len1 = strlen(str);
    int len2 = strlen(sub);

    for (int i = 0; i + len2 <= len1;)
    {

        if (str[i] != *sub)
        {
            i++;
            continue;
        }

        for (int j = 0; j < len2; j++)
        {
            if (str[i + j] != sub[j])
            {
                i++;
                break;
            }

            if (j == len2 - 1)
            {
                return i;
            }
        }
    }

    return -1;
}
