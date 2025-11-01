#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        double m1, m2, d;
        scanf("%lf %lf %lf", &m1, &m2, &d); 

        double res = (m1 * d) / (m1 + m2);

        int dif = d - (int)res;
            
        printf("%d\n", dif);    

    }

    return 0;
}
    