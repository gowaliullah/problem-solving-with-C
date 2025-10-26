    #include <stdio.h>

    int main()
    {  
        int n;
        scanf("%d", &n);

        char S[n][10001];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", &S[i]);
        }
        

        int intval, lowval, uppval = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < S[j]; j++)
            {
                if (S[j] <= '57' && S[j] >= '48')
            {
                intval++;
            }
            else if (S[j] >= '65' && S[j] <= '90')
            {
                uppval++;
            } 
            else if (S[j] >= '97' && S[j] <= '122')
            {
                lowval++;
            }
            }
            
        }

        printf("$%d %d %d", uppval, lowval, intval);

        return 0;
    }