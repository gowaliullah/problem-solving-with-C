#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int r = n, c = n;

    int arr[n][n];

    int priSum = 0, secSum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                priSum += arr[i][j];
            }
            if (i + j == r - 1)
            {
                secSum += arr[i][j];
            }
        }
    }

    int absDif = abs(priSum - secSum);

    printf("%d", absDif);

    return 0;
}