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

        int cn = a[i];
        if (cn > 0)
        {
            a[i] = 1;
            printf("%d ", a[i]);
        }
        else if (cn < 0)
        {
            a[i] = 2;
            printf("%d ", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}