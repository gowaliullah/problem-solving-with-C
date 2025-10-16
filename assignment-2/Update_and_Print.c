#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n]; 



    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

        int X = 0;
    int V = 0;

     scanf("%d", &X);
      scanf("%d", &V);;

    for (int i = 0; i < n; i++)
    {
        if (i == X)
        {
            a[i] = V;
        }
    }
    

    for (int i = (n - 1); i >= 0; i--)
    {
       printf("%d ", a[i]);
       
    }


    
    return 0;
}