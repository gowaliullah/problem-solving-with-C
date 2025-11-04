#include <stdio.h>
#include <stdbool.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    bool check = true;

    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            check = false;

            printf("%d ", i);

            break;
        }
    }

    if (check == true)
    {
        printf("%d ", -1);
    }

    return 0;
}

