#include <stdio.h>
#include <limits.h>

void minAndMax(int* a, int n) {
    int sml = INT_MIN;
    int bgr = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (sml < a[i])
        {
            sml = a[i];
        }
        
        if (bgr > a[i])
        {
            bgr = a[i];
        }        
    }
    
    printf("%d %d", bgr, sml);
}


int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    minAndMax(a, n);

    return 0;
}