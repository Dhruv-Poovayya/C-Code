#include <stdio.h>

double nth_root(double x, int n)
{
    if (x == 0)
        return 0;

    if (n == 1)
         return x;

    double left = 0.0;
    double right = x;
    double mid, mid_pow;
    double epsilon = 1e-6;  // Precision of the result

    while (right - left > epsilon)
    {
        mid = left + (right - left) / 2.0;
        mid_pow = mid;

        for (int i = 1; i < n; ++i)
        {
            mid_pow *= mid;
        }

        if (mid_pow == x)
        {
            return mid;
        }
        else if (mid_pow < x)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }

    return (left + right) / 2.0;
}

int main()
{
    double x;
    int n;

    printf("Enter the number (x): ");
    scanf("%lf", &x);

    printf("Enter the root degree (n): ");
    scanf("%d", &n);

    double result = nth_root(x, n);

    printf("The %d-th root of %.6lf is approximately %.6lf\n", n, x, result);

    return 0;
}

