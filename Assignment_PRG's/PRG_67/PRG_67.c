/*COLUMN NUMBER TO COLUMN TITLE */


#include <stdio.h>

void convertToTitle(int columnNumber, char* result)
{
    int index = 0;

    while (columnNumber>0)
    {
        columnNumber--; // Decrease columnNumber by 1 to handle 'A' to 'Z' range
        result[index++] = (char)(columnNumber % 26 + 'A');
        columnNumber /= 26;
    }

    result[index] = '\0'; // Null-terminate the string

    // Reverse the result string as the characters are stored in reverse order
    for (int i = 0; i < index / 2; i++)
    {
        char temp = result[i];
        result[i] = result[index - i - 1];
        result[index - i - 1] = temp;
    }
return result;
}

int main()
{
    int columnNumber;
    printf("Enter the column number: ");
    scanf("%d", &columnNumber);

    char columnTitle[20]; // Fixed size array for the result

    convertToTitle(columnNumber, columnTitle);
    printf("The corresponding column title is: %s\n", columnTitle);

    return 0;
}

