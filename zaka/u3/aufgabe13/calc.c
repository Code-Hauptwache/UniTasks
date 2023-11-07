#include <stdio.h>

int main()
{
    float a, b;

    printf("    The mini Calculator\n");
    printf("Enter your first intiger: ");
    scanf("%f", &a);
    printf("Enter your second intiger: ");
    scanf("%f", &b);

    printf("%f + %f = %f\n", a, b, a + b);
    printf("%f - %f = %f\n", a, b, a - b);
    printf("%f * %f = %f\n", a, b, a * b);
    printf("%f / %f = %f\n", a, b, a / b);
}
