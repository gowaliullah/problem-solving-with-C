
#include <stdio.h>

int main()
{
    
    char S[100001];
    scanf("%s", &S);

    int cnt = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i'&& S[i] != 'o' && S[i] != 'u')
        {
            cnt++;
        }        
    }
    
    printf("%d", cnt);

    return 0;
}



// Count_Me_1   -->  s[i] != '97' || s[i] != '101' || s[i] != 'i'|| s[i] != 'o' || s[i] != 'u'