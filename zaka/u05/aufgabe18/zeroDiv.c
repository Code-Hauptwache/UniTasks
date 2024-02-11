#include <stdio.h>

int main()
{
    float a;
    float b;

    printf("    The mini Calculator\n");
    printf("Enter your first number: ");
    scanf("%f", &a);
    printf("Enter your second number:");
    scanf("%f", &b);

    printf("%f + %f = %f\n", a, b, a + b);
    printf("%f - %f = %f\n", a, b, a - b);
    printf("%f * %f = %f\n", a, b, a * b);
    printf("%f / %f = %f\n", a, b, a / b);
}

//a)
//  Fehlermeldung wenn Divisor 0 ist: 2.000000 / 0.000000 = inf

