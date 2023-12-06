#include <stdio.h>

int main()
{
    printf("0! = 1\n");

    for (int i = 1; i < 51; i++)
    {
        long double factorial = 1;

        for (int j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        printf("%d! = %.0Lf\n", i, factorial);
    }
}
