#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int str = 1;
    int spc = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < spc; j++)
        {
           printf(" ");
        }
        
        for (int j = 0; j < str; j++)
        {
            printf("*");
        }
        
        str += 2;
        spc --;
        printf("\n");
    }
    
    return 0;
}