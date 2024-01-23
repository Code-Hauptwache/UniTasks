#include <stdio.h>

int calcSum(int num1, int num2);

int main()
{
    int x;
    int y;

    printf("This program calculates the sum of x and y.\n\n");

    printf("Please enter a number for x: ");
    scanf("%i", &x);

    printf("\n");

    printf("Please enter a number for y: ");
    scanf("%i", &y);

    printf("The sum of %i and %i is %i.\n", x, y, calcSum(x, y));

    return 0;
}

int calcSum(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        num1++;
        return calcSum(num1, num2 - 1);
    }
}
