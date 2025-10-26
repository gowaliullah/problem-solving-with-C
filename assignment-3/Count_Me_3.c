    #include <stdio.h>
    #include <string.h>

    int main()
    {  
        int n;
        scanf("%d", &n);

        char S[n][10001];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", S[i]);
        }

        for (int i = 0; i < n; i++)
        {
            char *element = S[i]; 

            int intval, uppval, lowval = 0;

            for (int j = 0; j < strlen(element); j++)
            {
                if (element[j] >= '0' && element[j] <= '9')
                {
                    intval++;
                }
                else if (element[j] >= 'a' && element[j] <= 'z')
                {
                    lowval++;
                }
                else if (element[j] >= 'A' && element[j] <= 'Z')
                {
                    uppval++;
                } 
            }

            printf("%d %d %d\n", uppval, lowval, intval);

            intval = 0;
            uppval = 0;
            lowval = 0;

        }
        return 0;
    }