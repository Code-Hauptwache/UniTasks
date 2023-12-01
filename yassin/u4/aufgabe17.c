#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int random_value = rand ();
    printf("Zufallszahl aus [0,%d]: %d\n", RAND_MAX, random_value);
    
}