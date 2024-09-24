/*To count frequency of element  in array */
#include<stdio.h>
#define MAX 100
int main()
{
    int arry[MAX]= {0};
    int freq[MAX]= {0};
    int n=0;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("The array elements are:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arry[i]);
        freq[arry[i]]++;
    }


    for(int i=0; i<MAX; i++)
    {

        if (freq[i]>0)
        {
            printf("Element %d: %d times\n",i, freq[i]);
        }
    }
return 0;
}

















































//#include<stdio.h>
//int main()
//{
//
//    int arry[100];
//    int counter1=0;
//    int counter2=0;
//    int counter3=0;
//    int counter4=0;
//    int n=0;
//    printf("Enter the total No elements:");
//    scanf("%d",&n);
//
//    printf("Enter the array Elements:");
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&arry[i]);
//    }
//
//
//    int size=sizeof(arry)/sizeof(arry[0]);
//
//    for(int i=0; i<size; i++)
//    {
//        if(arry[i]==54)
//        {
//            counter1++;
//        }
//        else if (arry[i]==55)
//        {
//            counter2++;
//        }
//        else if (arry[i]==65)
//        {
//            counter3++;
//        }
//        else if (arry[i]==47)
//            counter4++;
//    }
//
//    printf("The frequency of element 54:%d\n",counter1);
//    printf("The frequency of element 55:%d\n",counter2);
//    printf("The frequency of element 65:%d\n",counter3);
//    printf("The frequency of element 47:%d\n",counter4);
//return 0;
//
//
//}




//#include <stdio.h>
//
//#define MAX_VALUE 100
//
//int main() {
//    int n;
//    printf("Enter the total number of elements: ");
//    scanf("%d", &n);
//
//    int arry[n];
//    int freq[MAX_VALUE + 1] = {0};  // Frequency array initialized to 0
//
//    printf("Enter the array elements: ");
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arry[i]);
//        freq[arry[i]]++;  // Increment the frequency of the element
//    }
//
//    printf("Element frequencies:\n");
//    for (int i = 0; i <= MAX_VALUE; i++) {
//        if (freq[i] > 0) {
//            printf("Element %d: %d times\n",i, freq[i]);
//        }
//    }
//
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a[2];
//
//    a[1]++;
//
//    printf("%d\n",a[0]);
//          a[1]++;
//    printf("%d\n",a[1]);
//    printf("%d\n",a[2]);
//}
