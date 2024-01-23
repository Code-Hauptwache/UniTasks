#include <stdio.h>

int main()
{
    int base;
    int power;
    double result = 1;

    printf("This program calculates the base x to the power y.\n\n");

    printf("Please enter a number for x: ");
    scanf("%i", &base);

    printf("\n");

    printf("Please enter a number for y: ");
    scanf("%i", &power);

    if (power == 0)
    {
        result = 1;
    }
    else
    {
        for (int i = 0; i < power; i++)
        {
            result = (double)result * base;
        }
    }

    printf("The power of %i to the exponent %i is %f.\n", base, power, result);

    return 0;
}
