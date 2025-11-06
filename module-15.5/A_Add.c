#include <stdio.h>

void sum(int a, int b) {
    int res = a + b;
    printf("%d", res);
}

int main()
{
    int a[2];
   for (int i = 0; i < 2; i++)
   {
    scanf("%d", &a[i]);
   }
   
   sum(a[0], a[1]);

    return 0;
}