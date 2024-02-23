// Zakaria Boujana MN:1512968
#include "advanced_console_output.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int treffe_entscheidung_mensch();
int treffe_entscheidung_computer();
int schlaegt(int wer, int wen);
int spielrunde();

const int STEIN = 0;
const int SCHERE = 1;
const int PAPIER = 2;
const int SPOCK = 3;
const int ECHSE = 4;
char bezeichner[5][10];

int main()
{
    int spielStand;

    srand(time(NULL));

    strcpy(bezeichner[0], "Stein");
    strcpy(bezeichner[1], "Schere");
    strcpy(bezeichner[2], "Papaire");
    strcpy(bezeichner[3], "Spock");
    strcpy(bezeichner[4], "Echse");

    do
    {
        spielStand = spielrunde();

    }
    while (spielStand == 0);


    return 0;
}

int treffe_entscheidung_mensch()
{
    int wahl;

    printf("0=Stein, 1=Schere, 2=Papier, 3=Spock, 4=Echse\n");

    do
    {
        printf("Wie entscheiden Sie sich (0-4): ");
        scanf("%d", &wahl);
    }
    while (wahl < 0 || wahl > 4);

    return wahl;
}

int treffe_entscheidung_computer()
{
    int CPU = rand() % 5;

    switch(CPU)
    {
        case 0:
            return STEIN;
            break;
        case 1:
            return SCHERE;
            break;
        case 2:
            return PAPIER;
            break;
        case 3:
            return SPOCK;
            break;
        case 4:
            return ECHSE;
            break;
        default:
            return -1;
            break;
    }
}

int schlaegt(int wer, int wen)
{
    if (wer == wen) return 0;

    if (wer == STEIN)
    {
        if (wen == SCHERE || wen == ECHSE) return 1;
        else return -1;
    }

    if (wer == SCHERE)
    {
        if(wen == PAPIER || wen == ECHSE) return 1;
        else return -1;
    }

    if (wer == PAPIER)
    {
        if(wen == STEIN || wen == SPOCK) return 1;
        else return -1;
    }

    if (wer == SPOCK)
    {
        if(wen == SCHERE || wen == STEIN) return 1;
        else return -1;
    }

    if (wer == ECHSE)
    {
        if(wen == SPOCK || wen == PAPIER) return 1;
        else return -1;
    }
}

int spielrunde()
{
    int mensch = treffe_entscheidung_mensch();
    int cpu = treffe_entscheidung_computer();

    printf("--> Sie wählen %s\n", bezeichner[mensch]);
    printf("--> Der Computer wählt %s\n", bezeichner[cpu]);

    switch (schlaegt(mensch, cpu))
    {
        case -1:
            set_text_blinking();
            printf("==> *** %s schlaegt %s! ***\n", bezeichner[cpu], bezeichner[mensch]);
            unset_text_blinking();
            set_fg_color("red");
            printf("Pech, Sie haben verloren!\n");
            set_fg_color("default");
            return -1;
            break;
        case 0:
            printf("%s vs %s ... unentschieden. Nochmal!\n", bezeichner[mensch], bezeichner[cpu]);
            return 0;
            break;
        case 1:
            set_text_blinking();
            printf("==> *** %s schleagt %s! ***\n", bezeichner[mensch], bezeichner[cpu]);
            unset_text_blinking();
            set_fg_color("green");
            printf("Glueckwunsch, Sie haben gewonnen!\n");
            set_fg_color("default");
            return 1;
            break;
    }
}
