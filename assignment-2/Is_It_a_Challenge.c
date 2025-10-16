#include <stdio.h>

int main()
{
       int n;
    scanf("%d", &n);

    if (n > 0)
    {
       for (int i = 1; i <= n; i++)
    {
        scanf("%d ", i);
    }
    } else {

        for (int i = (n - 1); i >= 0; i--)
    {
        scanf("%d ", i);
    }

    }

    return 0;
}


