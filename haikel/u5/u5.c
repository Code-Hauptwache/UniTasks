#include <stdio.h>

int main (void)
{
    int a =2;
    int b =5;
    float c =2;
    float d =5;

    printf("%i + %i = %i\n", a,b, a+b);
    printf("%i - %i = %i\n", a,b, a-b);
    printf("%i * %i = %i\n", a,b, a*b);
    printf("%i / %i = %i bzw. %f\n",a,b, a/b, c/d);

    if ( a/b == 0 )
    {
        printf("Division durch 0 ist nicht definierbar!\n");
    }



















}
