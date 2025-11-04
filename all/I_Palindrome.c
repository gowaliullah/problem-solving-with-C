#include <stdio.h>
#include <string.h>

int main()
{

    int n = 1001;
    char str[n];

    scanf("%s", str);

    int flag = 1;

    int length = strlen(str);
    int l = 0, r = length - 1;

    while (l < r)
    {
        if (str[l] != str[r])
        {
            flag = 0;
            break;
        }

        l++, r--;
    }

    if (flag)
    {
        printf("YES");
    } else {
        printf("NO");
    }
     
    return 0;
}