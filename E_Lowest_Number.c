#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sm = INT_MAX;
    int smp = 0;

    for (int i = 0; i < n; i++)
    {
        if (sm > a[i])
        {
            smp = i + 1;
            sm = a[i];
        }
    }

    printf("%d %d", sm, smp);

    return 0;
}