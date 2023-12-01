#include <stdlib.h>
#include <stdio.h>


int main(void)
{
  int a, b;
  
  printf("HERZLICH WILLKOMMEN BEI DEN GRUNDRECHENARTEN:\n");
  printf("Bitte den ersten Operanden eingeben : ");
  scanf("%d", &a);
  printf("Bitte den zweiten Operanden eingeben: ");
  scanf("%d", &b);

  printf("%d + %d = %d\n", a, b, a+b);  
  printf("%d - %d = %d\n", a, b, a-b);  
  printf("%d * %d = %d\n", a, b, a*b);
if(b !=0)
  printf("%d / %d = %d\n", a, b, a/b); 
 else 
    printf("Division durch 0 ist nicht definiert\n");
}