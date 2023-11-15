#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int diceCPU;

    printf("Dice Generator\n");

    while (1)
    {
        printf("\r");

        srand(time(NULL));
        diceCPU = rand() % 6 + 1;

        printf("%i", diceCPU);

        fflush(stdout);
    }
}
