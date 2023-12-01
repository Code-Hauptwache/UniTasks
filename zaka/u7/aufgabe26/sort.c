#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    LOOP:if (a > b)
    {
        int n = a;
        a = b;
        b = n;
    }

    if (b > c)
    {
        int n = b;
        b = c;
        c = n;
    }

    if (a > b)
    {
        goto LOOP;
    }

    printf("The numbers in ascending order are: %d, %d, %d\n", a, b, c);

    return 0;
}
