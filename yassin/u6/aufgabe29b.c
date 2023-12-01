#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Funktion, um eine zufällige Wartezeit zwischen minMilliseconds und maxMilliseconds zu generieren
int getRandomWaitTime(int minMilliseconds, int maxMilliseconds) {
    return rand() % (maxMilliseconds - minMilliseconds + 1) + minMilliseconds;
}

int main() {
    // Initialisierung des Zufallsgenerators mit der aktuellen Zeit
    srand((unsigned int)time(NULL));

    // Endlosschleife für die zufällige Zeichenausgabe
    while (1) {
        // Generiere ein zufälliges druckbares ASCII-Zeichen 
        char randomChar = rand() % (126 - 32 + 1) + 32;

        // Ausgabe des zufälligen Zeichens
        printf("%c", randomChar);

        // Leere den Ausgabepuffer, um die Ausgabe zu erzwingen
        fflush(stdout);

        // Wartezeit nach jedem Zeichen (Variante 1: feste Zeitspanne von 20 Millisekunden)
        // usleep(20000);  // 20.000 Mikrosekunden = 20 Millisekunden

        // Wartezeit nach jedem Zeichen (Variante 2: zufällige Anzahl von Millisekunden zwischen 10ms und 100ms)
        int waitTime = getRandomWaitTime(10, 100);
        usleep(waitTime * 1000);  // Umrechnung von Millisekunden in Mikrosekunden
    }

    return 0;  // Dies wird nie erreicht, da das Programm in einer Endlosschleife bleibt
}
