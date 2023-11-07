#include <stdio.h>

int main()
{
    float a, b;

    printf("    The mini Calculator\n");
    printf("Enter your first number: ");
    scanf("%f", &a);
    printf("Enter your second number: ");
    scanf("%f", &b);

    printf("%f + %f = %f\n", a, b, a + b);
    printf("%f - %f = %f\n", a, b, a - b);
    printf("%f * %f = %f\n", a, b, a * b);
    printf("%f / %f = %f\n", a, b, a / b);
}
