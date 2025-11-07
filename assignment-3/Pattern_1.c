#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int str = 1;
    int spc = n - 1;

    int hash = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < spc; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < str; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        spc--;
        str += 2;
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = spc + 2; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = str - 4; j > 0; j--)
        {
            if (n % 2 != 0)
            {
                if (i % 2 != 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }

        spc++;
        str -= 2;
        printf("\n");
    }

    return 0;
}