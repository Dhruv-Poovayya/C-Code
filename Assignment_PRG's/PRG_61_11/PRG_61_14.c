/*To check array is monotonically*/

#include<stdio.h>
#include<stdbool.h>
void Monotonic_Check(int *a,int n);
int main()
{
    int a[100]={0};
    int n=0;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
 Monotonic_Check(a,n);
}

void Monotonic_Check(int *a,int n)
{
    _Bool Increasing=true;
    _Bool Decreasing=true;

for(int i=0;i<n-1;i++)
{
    if(a[i]>a[i+1])
    {
       Increasing=false;
    }

    else if(a[i]<a[i+1])
    {
        Decreasing=false;
    }
}

if(Decreasing)
{
    printf("The array is monotonically Decreasing:");
}
else if(Increasing)
{
    printf("The array is monotonically Increasing:");
}
else
{
    printf("The array is neither Increasing nor Decreasing");
}

}
