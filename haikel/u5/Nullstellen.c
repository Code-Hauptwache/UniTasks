#include <stdio.h>
#include <math.h>

int main (void)

{
 double a,b,c,x1,x2,z;

 printf("a: ");
 scanf("%lf",&a);
 printf("b: ");
 scanf("%lf", &b);
 printf("c: ");
 scanf("%lf", &c);
 z = b*b/4-c;

 if(z<0)
 {
    printf("Es existiert keine negative Nullstelle!\n");

}
else
{
  if (z == 0)
{
  x1 =-b/2+ sqrt(z);
  printf("Es gibt nur eine Lösung,x1=x2 = %lf\n",x1);
}
else
{
  x1 =(-b/2)+sqrt(z);
  x2 =(-b/2)-sqrt(z);
  printf("Es gibt zwei Lösungen x1 = %lf x2 = %lf\n",x1,x2);
}

}
}
