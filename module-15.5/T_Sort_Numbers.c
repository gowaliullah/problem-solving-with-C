#include <stdio.h>

int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && b < c)
    {
        printf("%d\n%d\n%d", b, c, a);

    } else if (a < b && c < b) { 

     if (a > c)
     {
           printf("%d\n%d\n%d", c, a, b);
     }
     else {
           printf("%d\n%d\n%d", a, c, b);
     }

    } else if (a < b && b < c) {
         printf("%d\n%d\n%d", a, b, c);
    } else if (a > b && b > c) {
         printf("%d\n%d\n%d", c, b, a);
    }

    printf("\n\n%d\n%d\n%d", a, b, c);

    return 0;
}