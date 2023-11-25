#include <stdio.h>

int main (void)
{
    float a, b;
    printf("Waehle eine Zahl aus.\n", a,b);
    scanf("%f", &a);
    printf("Waehle eine zweite Zahl aus.\n", a,b);
    scanf("%f", &b);
    printf("Ihre Ergebnisse lauten\n");
    
    printf("%f + %f = %f\n",a, b, a + b);
    printf("%f - %f = %f\n",a, b, a - b);
    printf("%f * %f = %f\n",a, b, a * b);
    printf("%f / %f = %f\n",a, b, a / b);


   

}