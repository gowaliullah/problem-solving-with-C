#include <stdio.h>

void printOut(int n) {
     for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printOut(n);
    return 0;
}