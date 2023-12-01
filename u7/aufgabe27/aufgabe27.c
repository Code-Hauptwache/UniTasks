#include <stdio.h>

int main() 
{
    int n, sum;

    scanf("%d", &n);
     
     
     if (n < 0) 
     {
        n = 0;
     }
   
   
    sum = 0;

    do
    {
        sum += n; 
        n--;      
    }
     while (n >=0 && n > -3);
    
    printf("%d\n", sum);
  
    return 0;
}
