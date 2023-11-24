#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    unsigned char randSymbol;

    srand(clock() + time(NULL));

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    randSymbol = rand() % 93 + 33;
    printf("%c", randSymbol);

    printf("\n");
}

// c)
// Ohne Initialisierung des Zufallsgenerators mittels srand(): 
// Immer das gleiche Passwort "JV+y,(H`", das Programm generiert immer das gleiche "zufällige" Passwort. Das liegt daran, dass rand() ohne Initialisierung von srand() immer mit dem gliechen 'Seed' startet, was im Fall der stdlib.h Biblothek immer 1 ist und dadurch jedesmal das gleiche Passwort generiert wird.

// Initialisierung des Zufallsgenerators mit einem festen Wert (z.B. 42, also srand(42)): 
// Das generierte Passwort unterschiedet sich von dem ohne Initialisierung, aber änder sich nicht bleibt "s=.2xN33"

// Initialisierung des Zufallsgenerators mittels der aktuellen Systemzeit: 
// Das generierte Passwort ändert sich bei jedem Aufruf, sofern der nächste Aufruf nicht innerhalb einer Sekunde erfolgt, ansonsten bleibt es gleich.