#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int firstIndex = 0;
    int lastIndex = 0;

    if (n >= 10 && n <= 99)
    {
        firstIndex = n / 10;
        lastIndex = n % 10;
    }

    if (n == 10)
    {
        printf("YES");
    }
    else if (firstIndex % lastIndex == 0 || lastIndex % firstIndex == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}