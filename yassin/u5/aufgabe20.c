#include<stdio.h>
int main()
{
int i = 25;
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
printf("#@!= %");
}
printf("\n");
return 0;
}
