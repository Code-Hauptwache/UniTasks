#include <stdio.h>
#include "my_math_functions.h"

void main(void)
{
    int a=-3;
    printf("Der Absolutwert von %d ist : %d\n", a, absWertInt(a));

    double b = -2.7;
    printf("Der Absolutwert von %lf ist : %lf\n",b , absWertDouble(b));
}
{
    double a;
    double b;

    scanf("%lf",&a);
    scanf("%lf",&b);

    printf("%lf+%lf = %lf\n",a,b, (a+b));
    printf("%lf-%lf = %lf\n",a,b, a-b);
    printf("%lf+%lf = %lf\n",a,b, a*b);
    printf("%lf+%lf = %lf\n",a,b, a/b);

}
