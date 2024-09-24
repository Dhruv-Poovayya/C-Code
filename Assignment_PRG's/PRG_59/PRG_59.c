#include<stdio.h>
int main()
{
    int i,j;
    int offset=1;
    int size=5;

    for(i=0; i<size; i+=offset)
    {
        for(j=0; j<i; j++)
        {
            printf(" %c",'A'+j);
        }
        printf("\n");
    }


    for(i=size; i>0; i--)
    {
        for(j=0; j<i ; j++)
        {
            printf(" %c",'A'+j);
        }
        printf("\n");
    }

    return 0;
}
