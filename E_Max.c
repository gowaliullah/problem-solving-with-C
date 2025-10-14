#include <stdio.h>

int main() {
    
    int n;
    int max = 0;

    while (scanf("%d", &n))
    {
        if (max < n)
        {
            max = n;
        }
    }
    
    printf("%d", max);
    
    return 0;
}