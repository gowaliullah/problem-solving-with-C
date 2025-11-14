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
    case 11:
        n = 11;
         break;
    case 13:
        n = 12;
         break;
    case 15:
        n = 13;
         break;
    case 17:
        n = 14;
         break;
    case 19:
        n = 15;
         break;
    case 21:
        n = 16;
         break;
    }


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
        for (int j = 6; j > 1; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < 1; k++)
        {
            if (n == 6)
            {
                printf("*");
            }
            else if (n == 7)
            {
                printf("***");
            }
            else if (n == 8)
            {
                printf("*****");
            }
            else if (n == 9)
            {
                printf("*******");
            }
            else if (n == 10)
            {
                printf("*********");
            }
            else if (n == 11)
            {
                printf("***********");
            }
            else if (n == 12)
            {
                printf("*************");
            }
            else if (n == 13)
            {
                printf("***************");
            }
            else if (n == 14)
            {
                printf("*****************");
            }
            else if (n == 15)
            {
                printf("*******************");
            }
            else if (n == 16)
            {
                printf("*********************");
            }
        }

        printf("\n");
    }

    return 0;
}