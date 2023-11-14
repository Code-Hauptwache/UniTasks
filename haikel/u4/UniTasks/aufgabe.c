#include <stdio.h>

int main ()
{
    int a, b, c, d;

   printf("Wähle deine erste Zahle.\n");
   scanf("%i", &a);
      printf("Wähle deine zweite Zahle.\n");
   scanf("%i", &b);
      printf("Wähle deine dritte Zahle.\n");
   scanf("%i", &c);
      printf("Wähle deine vierte Zahle.\n");
   scanf("%i", &d);
   printf("%i* %i* %i* %i = %i\n",a, b, c, d, a* b* c* d);

   printf("Überlege dir zwei Zahlen\n");
   scanf("%i", &a);
   scanf("%i", &b);
   printf("(%i-(%i%%2)) > 7 = %i\n",a,b,(a-(b%2)) > 7);

   printf("Mit welcher Zahl möchtest du deine Summe herausbekommen?\n");
   scanf("%i", &a);
   printf("%i/3/4/2 = %i\n", a, a/3/4/2);

   int p, q, r;

   printf("Wähle deine drei Zahlen?\n");
   scanf("%i", &p);
   scanf("%i", &q);
   scanf("%i", &r);
   printf("%i || !%i < %i = %i\n", p , q , r, p || !q < r);

   printf("Wähle deine drei Zahlen?\n");
   scanf("%i", &p);
   scanf("%i", &q);
   scanf("%i", &r);
   printf("%i && %i || !%i = %i\n", p , q, r, p && q || r);

   printf("Wähle deine drei Zahlen?\n");
   scanf("%i", &p);
   scanf("%i", &q);
   scanf("%i", &r);
   printf("%i || !%i && %i = %i\n", p,q,r, p || !q && r);

      int x = 1;
      int y = x++;
      int g = y;

      int z =2;
      int n = ++z;

      printf("Postfix %i\n", y);
      printf("Postfix %i\n", g);
      printf("Präfix %i\n", n);














}
