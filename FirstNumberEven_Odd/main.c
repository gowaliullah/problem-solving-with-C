#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);

    int first = X / 100;

    int last = X % 10; // get last digit

    if ( first % 2 == 0 )
    {
       printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
     
    return 0;
}
