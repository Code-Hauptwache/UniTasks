#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("\033[1mZeropoint calculator of a quadratic function ax^2+bx+c = 0\033[0m\n");
    printf("Pleas enter a number for a: ");
    scanf("%d", &a);
    printf("Pleas enter a number for b: ");
    scanf("%d", &b);
    printf("Pleas enter a number for c: ");
    scanf("%d", &c);
    
    if(a == 0 && b == 0 && c != 0)
    {
        printf("%ix^2+%ix+%i = 0 has no solution\n", a, b, c);
        return 0;    
    }
    else if (a )
    {

    }   

    // x = (-b +- sqrt(b^2 - 4ac)) / (2a))

    double x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    double x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    printf("The zeropoints are: x1 = %f, x2 = %f\n", x1, x2);

    return 0;
}
