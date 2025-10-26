#include <stdio.h>

int main()
{
    char str[10000001];
    scanf("%s", &str);


    // int free_arr[26] = {0};
    int free_arr[128] = {0};


    for (int k = 0; str[k] != '\0'; k++)
    {
        // int idx = str[k] - 'a';
        int idx = str[k];
        free_arr[idx]++;
    }
    
    for (int i = 0; i < 128; i++)
    {
        if (free_arr[i] != 0)
        {
            // printf("%c : %d\n", i + 'a', free_arr[i]);
            printf("%c : %d\n", i, free_arr[i]);
        }
        
    }
    
    return 0;
}