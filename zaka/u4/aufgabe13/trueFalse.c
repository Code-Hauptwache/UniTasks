#include <stdio.h>

int main() {
    int x, y, count;

    printf("x\ty\tNOT x\tNOT y\tx AND y\tx OR y\tx XOR y\tNOT (x AND y)\n");
    for (int i = 0; i < 7; i++)
    {
        if (count < 2)
        {
            for (int j = 0; j < count; j++)
            {
                printf("-");
            }
        }
        printf("-------+");
        count++;
    }
    printf("-----------\n");

    for (x = 1; x >= 0; x--) {
        for (y = 1; y >= 0; y--) {
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
                   x, y,         // x and y
                   !x, !y,       // NOT x and NOT y
                   x && y,       // x AND y
                   x || y,       // x OR y
                   x != y,       // x XOR y
                   !(x && y));   // NOT (x AND y)
        }
    }

    return 0;
}
