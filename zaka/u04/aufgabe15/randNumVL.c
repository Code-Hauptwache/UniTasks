#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // use current time as seed for random generator
    int random_value = rand();
    printf("Zufallszahl aus [0,%d]: %d\n", RAND_MAX, random_value);

    int lower, upper;
    printf("Bitte untere Grenze angeben: ");
    scanf("%d", &lower);
    printf("Bitte obere Grenze angeben: ");
    scanf("%d", &upper);
    random_value = (rand() % (upper-lower+1)) + lower;
    printf("Zufallszahl zwischen %d und %d: %d\n",
    lower, upper, random_value );
}
