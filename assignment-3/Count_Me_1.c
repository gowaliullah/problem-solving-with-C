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

    int dividedByTwo = 0;
    int dividedByThree = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            dividedByTwo++;
        }
        else if (a[i] % 3 == 0)
        {
            dividedByThree++;
        }
    }

    printf("%d %d", dividedByTwo, dividedByThree);
    

    return 0;
}