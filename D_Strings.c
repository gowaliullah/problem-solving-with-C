#include <stdio.h>
#include <string.h>

int main()
{

    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int alen = strlen(a);
    int blen = strlen(b);

    printf("%d %d\n", alen, blen);
    printf("%s%s\n", a, b);

    char ach = a[0];
    char bch = b[0];

    a[0] = bch;
    b[0] = ach;

    printf("%s %s", a, b);
     
    return 0;
}