/* Passing 1-D array */
//#include<stdio.h>
//void one_dimension(int arr[],int size);
//int main()
//{
//    int arr[3]={20,10,5};
//    int size=3;
//    one_dimension(arr,size);
//    return 0;
//}
//
//void one_dimension(int *arr,int size)
//{
//    int i=0;
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//
//     return 0;
//}

/* To pass 2D array as function */
//
//#include<stdio.h>
//int two_dimension(int rows, int cols,int arr[rows][cols]);
//int main()
//{
//
//  int arr[2][2]={10,20,30,40};
//   two_dimension(2,2,arr);
//}
//
//int two_dimension(int rows,int cols,int  arr[rows][cols])
//{
//    int i=0;
//    int j=0;
//    for(i=0;i<rows;i++)
//    {
//        for(j=0;j<cols;j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//    }
//
//    return 0;
//}

#include<stdio.h>
int main()
{

    int x=0;
    int rem=0;
    int quo=0;
    printf("ENTER A NUMBER:");
    scanf("%d",&x);
    while(x!=0)
    {
        rem=(rem*10)+(x%10);
        quo=x/10;
        x=quo;
    }
        if(rem>0)
        {
            printf("%d",rem);
        }
        return 0;
}
//int rev(int x)
//{
//    char a[2];
//    int i=0,rem=0;
//    int quo=0;
//    while(x!=0)
//    {
//        rem=x%10;
//        quo=x/10;
//        x=quo;
//        if(rem>0)
//        {
//            for(i=0; x!=0; i++)
//            {
//                a[i]=rem;
//            }
//        }
//    }
//
//    return a[i];
//
//
//}

























