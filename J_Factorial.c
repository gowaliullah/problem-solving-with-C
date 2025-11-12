#include <stdio.h>

long long int facr(int n)
{
    if (n == 1)
    {
        return 1;
    }

    long long int mul = facr(n - 1);

    return mul * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    long long int result = facr(n);
    printf("%d", result);

    return 0;
}