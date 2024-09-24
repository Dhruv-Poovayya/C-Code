/* To add elements of array to match a target */
#include<stdio.h>
int main()
{
    int arry[4]= {2,4,5,6};
    int target=11;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arry[i]+arry[j+1]==target)
            {
                printf("[%d,%d]=%d\n",i,j+1,target);
            }


        }
    }
    return 0;
}

