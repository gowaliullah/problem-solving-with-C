#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] > a[k])
                {
                    int temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            c[j] = a[j] - b[j];
        }

        for (int j = 0; j < n; j++)
        {
            int absDif = abs(c[j]);
            printf("%d ", absDif);
        }
        printf("\n");
    }

    return 0;
}