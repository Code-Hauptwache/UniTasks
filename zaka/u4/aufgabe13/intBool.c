#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter any intiger for a: ");
    scanf("%i", &a);
    printf("Enter any intiger for b: ");
    scanf("%i", &b);
    
    printf("\nThe truth value of a && b is\t%i", a && b);
    printf("\nThe truth value of a || b is\t%i", a || b);
    printf("\nThe truth value of a & b is\t%i", a & b);
    printf("\nThe truth value of a | b is\t%i", a | b);
}