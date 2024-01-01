#include <stdio.h>

int main()
{
    int n;

    printf("Please enter an intiger: ");
    scanf("%i", &n);

    printf("Decreased your intiger by one (postfix): %i\n", n--);
    printf("After decrementation (postfix): %i\n\n", n);

    printf("Decreased your intiger by one (prefix): %i\n", --n);
    printf("After decrementation (prefix): %i\n", n);
}