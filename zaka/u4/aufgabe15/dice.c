#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int diceCPU; // Variable to store the dice roll

    // Print the title of the dice generator
    printf("Dice Generator");

    while (1) // Infinite loop to keep the program running
    {
        printf("\r"); // Carriage return to overwrite the last dice roll

        // Seed the random number generator with the current time
        srand(time(NULL));

        // Generate a random number between 1 and 6 and store it in diceCPU
        diceCPU = rand() % 6 + 1;

        // Print the dice roll with some space padding
        printf("      %i", diceCPU);

        // Flush the output buffer to ensure the roll is printed immediately
        fflush(stdout);
    }

    // Unreachable code, as the loop is infinite
    return 0;
}
