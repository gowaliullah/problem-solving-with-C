#include <stdio.h>

int main()
{


   int tc;
   scanf("%d", &tc);

   while (tc--)
   {
     char S[55], T[55];
    scanf("%s %s", S, T);

    int s_len = strlen(S);
    int t_len = strlen(T);

    int min_cal;
    if (s_len < t_len)
    {
       min_cal = s_len;
    } 
    else 
    {
        min_cal = t_len;
    }
    
    for (int i = 0; i < min_cal; i++)
    {
        printf("%c%c", S[i], T[i]);
    }
    
     
    // s remaining
    int rem_s = s_len - min_cal;
    if (rem_s > 0)
    {
            for (int j = min_cal; j < s_len; j++)
            {
               printf("%c", S[j]);
            }      
    }
    
     
    // t remaining
    int rem_t = t_len - min_cal;
    if (rem_t > 0)
    {
            for (int j = min_cal; j < t_len; j++)
            {
               printf("%c", T[j]);
            }      
    }
    printf("\n");
   }
   
    

    return 0;
}