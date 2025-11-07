#include <stdio.h>
#include <string.h>


int is_palindrome(char S[]) {
     int flag = 1;

    int length = strlen(S);
    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        if (S[left] != S[right])
        {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    return flag;
}


int main()
{
    char S[1001];
    scanf("%s", S);

   int res = is_palindrome(S);

    if (res)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}