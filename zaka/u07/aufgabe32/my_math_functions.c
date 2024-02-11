#include <stdio.h>
#include "my_math_functions.h"

int absWertInt( int v )
{
    if ( v < 0 )
        return -v;
    else
        return v;
}

double absWertDouble( double v )
{
    if ( v < 0.0 )
        return -v;
    else
        return v;
}

void grundrechnarten(double a, double b)
{
    printf("%lf + %lf = %lf\n", a, b, a + b);
    printf("%lf - %lf = %lf\n", a, b, a - b);
    printf("%lf * %lf = %lf\n", a, b, a * b);
    printf("%lf / %lf = %lf\n", a, b, a / b);
}
