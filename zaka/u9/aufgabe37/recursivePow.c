#include <stdio.h>

double calcPow(int base, int power);

int main()
{
    int base;
    int power;

    printf("This program calculates the base x to the power y.\n\n");

    printf("Please enter a number for x: ");
    scanf("%i", &base);

    printf("\n");

    printf("Please enter a number for y: ");
    scanf("%i", &power);

    printf("The power of %i to the exponent %i is %f.\n", base, power, calcPow(base, power));

    return 0;
}

double calcPow(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * calcPow(base, power - 1);
    }
}
