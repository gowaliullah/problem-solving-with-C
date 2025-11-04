#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

   int str = 1;
   int spc = n - 1;




   for (int i = 0; i < n; i++)
   {

    for (int k = 0; k < spc; k++)
    {
        printf(" ");
    }
    

    for (int j = 0; j < str; j++)
    {
        printf("*");
    }

    spc --;
    str += 2;
    printf("\n");

   }


   for (int i = 0; i < n; i++)
   {

    for (int k = spc + 1; k > 0; k--)
    {
        printf(" ");
    }
    
    for (int j = str - 2; j > 0; j--)
    {
        printf("*");
    }
    
    spc ++;
    str -= 2;
    printf("\n");

   }

    return 0;
}