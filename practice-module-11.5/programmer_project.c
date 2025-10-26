#include <stdio.h>

int main()
{ 
    double n, d, add_new;
    scanf("%lf %lf %lf", &n, &d, &add_new);

    double result = (n * d) / (n + add_new);


    double dif = result - (int)result;

    if (dif < .0000001)
    {
       printf("%d\n", (int)result);
    } else {
        printf("%d", (int)result + 1);
    }

    return 0;
}

