#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    int a[n]; 


    int positive = 0;
    int negative = 0;


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
       if (0 > a[i])
       {
           negative += a[i];
    } else {
           positive += a[i];
       }
       
    }
    
    printf("%d %d", positive, negative);
    

    return 0;
}