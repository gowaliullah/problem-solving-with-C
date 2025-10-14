#include <stdio.h>

int main() {
    
    int pass;

    while (scanf("%d", &pass) != EOF)
    {
       if (pass == 1999)
       {
        printf("Correct");
        break;
       } else {
         printf("Wrong\n");
       }
    }

    // with for loop

      for (;scanf("%d", &pass) != EOF;)
    {
       if (pass == 1999)
       {
        printf("Correct");
        break;
       } else {
         printf("Wrong\n");
       }
    }
    
    
    return 0;
}