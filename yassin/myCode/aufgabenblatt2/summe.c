#include <stdio.h>

int main(void)
{
    int summand1, summand2, summe;
    printf("Geben Sie den ersten Summanden ein: ");
    scanf("%d", &summand1);
    printf("Geben Sie den zweiten Summanden ein: ");
    scanf("%d", &summand2);
    summe = summand1 + summand2;
    printf("Die Summe von %d und %d ist %d.\n", summand1, summand2, summe);
    return 0;
}
