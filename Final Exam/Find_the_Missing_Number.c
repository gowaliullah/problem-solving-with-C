#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        long long int m;
        int a, b, c;

        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int result;
        int otherThree = a * b * c;

        if ((m / otherThree) * otherThree != m)
        {
            result = -1;
        }
        else if (m == 0)
        {
            result = 0; 
        }
        else if (m < otherThree)
        {
            result = -1;
        }
        else
        {
            result = m / otherThree;
        }

        printf("%lld\n", result);
    }

    return 0;
}