#include <stdio.h>

void printOut() {

        int n;
    scanf("%d", &n);

     for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
} 

int main()
{
    printOut();
    return 0;
}