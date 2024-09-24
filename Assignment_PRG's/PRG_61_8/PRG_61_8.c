#include<stdio.h>
int main()
{
    int matrix[2][2]= {4,6,8,12};
    int largest=matrix[0][0];
    int smallest=matrix[0][0];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(matrix[i][j]>largest)
            {
                largest=matrix[i][j];
            }
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(matrix[i][j]<smallest)
            {
                smallest=matrix[i][j];
            }
        }
    }


    printf("The Largest Value element in Matrix is:%d\n",largest);

    printf("The Smallest Value element in Matrix is:%d\n",smallest);




    return 0;
}














































//#include<stdio.h>
//int main()
//{
//    int matrix[2][2]= {4,6,8,12};
//    int new_matrix[4];
//
//    int Largest=0;
//    int Smallest=0;
//    int k=0;
//    for(int i=0; i<2; i++)
//    {
//        for(int j=0; j<2; j++)
//        {
//            new_matrix[k]=matrix[i][j];
//            k++;
//        }
//    }
//
//
//    Largest=new_matrix[0];
//    Smallest=new_matrix[0];
//    for(int i=0; i<4; i++)
//    {
//        if(new_matrix[i]>Largest)
//            Largest=new_matrix[i];
//    }
//
//
//    for(int i=0; i<4; i++)
//    {
//        if(new_matrix[i]<Smallest)
//            Smallest=new_matrix[i];
//    }
//
//    printf("The Largest Element in array is:%d\n\n",Largest);
//    printf("The Smallest element in array is:%d\n\n",Smallest);
//
//    return 0;
//}
//




