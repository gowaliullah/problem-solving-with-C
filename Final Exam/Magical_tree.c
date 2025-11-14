#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        n = 6;
         break;
    case 3:
        n = 7;
         break;
    case 5:
        n = 8;
         break;
    case 7:
        n = 9;
         break;
    case 9:
        n = 10;
         break;
    }

    /*

    if (n == 1)
    {
        n = 6;
    }
    else if (n == 3)
    {
        n = 7;
    } else if (n == 5)
    {
        n = 8;
    }
    */

    int str = 1;
    int spc = n - 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < str; k++)
        {
            printf("*");
        }
        str += 2;

        printf("\n");
        spc--;
    }

    for (int i = 0; i < 5; i++)
    {

        for (int j = n; j > 1; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < 1; k++)
        {
            if (n = 6)
            {
                printf("*");
            }
            else if (n = 7)
            {
                printf("***");
            }
        }

        printf("\n");
    }

    printf("%d", n);

    return 0;
}