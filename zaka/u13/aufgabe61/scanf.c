#include <stdio.h>

int main()
{
    unsigned int a;
    unsigned int b;
    int num;

    printf("Please enter two positive numbers in this format a/b: ");
    scanf("%d/%d", &a, &b);

    num = a/b;

    printf("\n%d+%d/%d\n", num, a - (num * b), b);

    return 0;
}
