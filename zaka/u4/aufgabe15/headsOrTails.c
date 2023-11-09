#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int headsOrTails;

    printf("Heads or Tails\n");

    srand(time(NULL));
    headsOrTails = rand() % 2;

    printf("%i\n", headsOrTails);

    fflush(stdout);
}

//c)
//  Ohen Initialisierung des Zufallsgenerators wird nur 1 ausgegeben
//  Mit Initialisierung des Zufallsgenerators mit einem festen Wert (z.B. 42, also srand(42)) wir nur 0 ausgegeben
//  Mit Initialisierung des Zufallsgenerators mittels der aktuellen Systemzeit wird zufällig 0 oder 1 ausgegebe
