/* TO PRINT THE LAST WORD IN THE SENTENCE */

#include<stdio.h>

int main()
{
    char str[50];
    int count[50]= {0};
    int index=0;

    printf("Enter an String:");
    fgets(str,50,stdin);

// TO COUNT NUMBER OF SPACES

    for(int j=0; str[j]!=0; j++)
    {
        if(str[j]==' ')
        {
            count[index++]=j;

        }
    }


    index=index-1; // Because the index gets incremented by 1 after storing position of last space


    if(index>0)
    {
        printf("Position of Last Space:%d\n",count[index]);
    }
    else
    {
        printf("No spaces found\n");
    }




// IF SPACE IS GIVEN AFTER THE LAST WORD

    if(index>0 && str[count[index]+1]=='\n') // COUNT[INDEX]+1 WILL CONTAIN THE LAST SPACE +1 WILL BE NEW LINE , IF SPACE IS GIVEN AFTER THE LAST WORD
    {
        index--;// GOING BACK TO PREVIOUS SPACE, SO THAT THE LAST WORD IS AFTER THAT SPACE

        for(int i=count[index]+1; str[i]!=' '; i++)
        {
            printf("%c",str[i]);
        }
    }

    else if( index>0)
    {
        // TO print the last word after the last space

        for(int i=count[index]; str[i]!='\0'; i++)
        {
            printf("%c",str[i]);
        }
    }


    else
    {
        printf("%s",str);
    }

    printf("\n");
    return 0;
}
