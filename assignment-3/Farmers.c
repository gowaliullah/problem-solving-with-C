#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d", &t);

    int s[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &s[i]);
    }
    

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", s[i]);
    }
    

    return 0;
}