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

   

    // common part

    int i = 0, j = 0;
    while (i < s_len && j < t_len)
    {
      printf("%c%c", S[i], T[j]);
      i++; j++;
    }
    
     
    // s remaining
   while (i < s_len)
    {
      printf("%c", S[i]);
      i++;
    }
    
     
    // t remaining
      while (j < t_len)
    {
      printf("%c", T[j]);
      j++;
    }
    
    printf("\n");
   }
   
    

    return 0;
}