#include <stdio.h>

int main()
{
    int N;
    scanf("%d", N);

    if (N == 1)
    {
        printf("%d", N);
    }
    else
    {
        for (int i = 0; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}