#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

     int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    int left = 0, right = n - 1;

    while (left < right)
    {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++, right--;
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }
    
    if (flag)
    {
       printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}