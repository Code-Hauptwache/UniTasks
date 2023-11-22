#include <stdio.h>

int main (void)

{
 int i =30;

 if (--i)
{
printf("Zick");
}
else
{
printf("zack-");
}
if ( (++i)%2 )
{
printf("zack-");
}
else
{
printf("Zick");
}
if ( (--i) > 10)
{
printf("Muster");
}
else
{
printf("#@!=.");
}
printf("\n");
return 0;
}
