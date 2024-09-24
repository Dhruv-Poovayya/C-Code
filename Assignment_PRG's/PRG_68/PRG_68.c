#include<stdio.h>
#include <math.h>

int nth_root(int num, int n, _Bool *isExact);
int powerof(int num, int n);

int main(void)
{
    _Bool isExact = 0;
    int num = 100, n = 3;
    int result = nth_root(num, n, &isExact);

    (isExact == 1) ? (printf("%dth root is %d\n", n, result)) : (printf("%dth root lies between %d and %d\n", n, result, result + 1));
    return 0;
}

int nth_root(int num, int n, _Bool *isExact)
{

    int exponential;

    for (int i = 1;; i++)
    {
        exponential = powerof(i, n);

        if (exponential == num)
        {
            (*isExact) = 1;
            return i;
        }
        else if (exponential > num)
        {
            (*isExact) = 0;
            return i - 1;
        }
    }
}

int powerof(int num, int n)
{

    int result = 1;

    for (int i = 0; i < n; i++)
    {
        result *= num;
    }

    return result;
}
