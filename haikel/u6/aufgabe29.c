#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)

{
    srand(time(NULL));
    int zufallssymbole = rand();

    while(1)
        printf("%c", 33+rand()% 94);

    fflush(stdout);

    usleep(w);

}
