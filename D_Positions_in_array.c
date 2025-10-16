#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {

        int cp = a[i];

        if (cp <= 10)
        {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }

    return 0;
}