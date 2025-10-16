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
       if (i >= 0)
       {
           positive += a[i];
       } else {
        negative += a[i];
       }
       
    }
    
    printf("%d %d", positive, negative);
    

    return 0;
}