#include <stdio.h>

int main() {
    
    int a;
    printf("Bitte geben Sie den Wert von a ein: ");
    scanf("%d", &a);

    if (a > 0) {
       
        int i, j;

      
        for (i = 0; i < a; i++) 
        {
          
            j = 0;

          
            while (j <= i) 
            {
                
                printf("*");

                
                j++;
            }

            
            printf("\n");
        }
    } else {
        printf("0\n");
    }

    return 0;
}
