#include <stdio.h>

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;

    printf("Please enter three positive intiger in following form a + b,c: ");
    scanf("%d + %d,%d", &a, &b, &c);



    printf("\n%d+%d/%d\n", c, a - (c * b), b);

    return 0;
}
