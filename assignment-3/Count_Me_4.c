#include <stdio.h>

int main()
{
    
    char S[10001];
    scanf("%s", &S);

    int fre[26] = { 0 };
    
    for (int i = 0; S[i] != '\0'; i++)
    {
        int val = S[i];
        if (S[i] <= 'z' && S[i] >= 'a')
        {
            fre[val - 'a']++;
        }   
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0 )
        {
             printf("%c - %d\n", i + 'a', fre[i]);
        }    
    }
    
    return 0;
}