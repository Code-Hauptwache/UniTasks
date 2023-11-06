#include <stdio.h>
#include <math.h>

int main()
{
    double a=2.0, b=3.0, c=0.4E1, p=3.14;

    printf("a) %f\n", 5 * a + 76 + 3.1);
    printf("b) %f\n", a + 6 / 2 * p * a + 1/a);
    printf("c) %f\n", a + b - p/c / a + c/a -1/b);
    printf("d) %f\n", pow(a, -2));
    printf("e) %f\n", pow((-a), 2));

    return 0;
}
