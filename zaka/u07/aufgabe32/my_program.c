#include <stdio.h>
#include "my_math_functions.h"

void main(void)
{
    double a;
    double b;
    printf("    \033[1mBasic math program\033[0m\n");
    printf("Please enter your first number: ");
    scanf("%lf", &a);
    printf("Please enter your second number: ");
    scanf("%lf", &b);

    printf("The absolute value of %f is: %d\n", a, absWertInt(a));

    printf("The absolute value of %lf is: %lf\n", b, absWertDouble(b));

    grundrechnarten(a, b);
}
