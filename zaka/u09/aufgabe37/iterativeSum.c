#include <stdio.h>

int main()
{
    int x;
    int y;
    int sum;

    printf("This program calculates the sum of x and y.\n\n");

    printf("Please enter a number for x: ");
    scanf("%i", &x);

    printf("\n");

    printf("Please enter a number for y: ");
    scanf("%i", &y);

    sum = x;

    for (int i = 0; i < y; i++)
    {
        sum++;
    }

    printf("The sum of %i and %i is %i.\n", x, y, sum);

    return 0;
}
