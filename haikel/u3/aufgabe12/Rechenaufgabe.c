#include <stdio.h>

int main (void)
{
    double a=2.0, b=3.0, c=0.4E1, p=3.14;
    double Ergebnis1 = 5 * a + 76 + 3.1;
    double Ergebnis2 = a + 6 / 2 *p * a + 1 / a;
    double Ergebnis3 = a + b - p / c / a + c / a - 1/b;
    double Ergebnis4 = 1/(a*a);
    double Ergebnis5 = (-a) * (-a);
    

    printf("Ihr Ergebnis = %f\n", Ergebnis1);
    printf("Ihr Ergebnis = %f\n", Ergebnis2);
    printf("Ihr Ergebnis = %f\n", Ergebnis3);
    printf("Ihr Ergebnis = %f\n", Ergebnis4);
    printf("Ihr Ergebnis = %f\n", Ergebnis5);

    return 0;
} 