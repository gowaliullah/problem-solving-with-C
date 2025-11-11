#include <stdio.h>

long long sum = 0;
int sumFunc(long long a[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    sum += a[i];
    sumFunc(a, n, i + 1);

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    sumFunc(a, n, 0);
    printf("%lld", sum);

    return 0;
}