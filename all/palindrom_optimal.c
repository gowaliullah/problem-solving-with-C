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

    int flag = 1;
    int l = 0, r = n - 1;

    while (l < r)
    {
        if (a[l] != a[r])
        {
            flag = 0;
            break;
        }
        l++, r--;
    }
    
    if (flag)
    {
         printf("YES");
    } 
    else 
    {
         printf("NO");
    }
    

    return 0;
}