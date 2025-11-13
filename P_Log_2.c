#include <stdio.h>

int whr(int n) {

    int res = n/2;
    if (n > 0)
    {
        return;
    }

    whr(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    whr(n);
    return 0;
}