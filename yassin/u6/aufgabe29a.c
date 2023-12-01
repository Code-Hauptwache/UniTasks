#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialisierung des Zufallsgenerators mit der aktuellen Zeit
    srand((unsigned int)time(NULL));

    // Endlosschleife für die zufällige Zeichenausgabe
    while (1) {
        // Generiere ein zufälliges druckbares ASCII-Zeichen (Zeichen mit ASCII-Werten zwischen 32 und 126)
        char randomChar = rand() % (126 - 32 + 1) + 32;

        // Ausgabe des zufälligen Zeichens
        printf("%c", randomChar);

        // Leere den Ausgabepuffer, um die Ausgabe zu erzwingen
        fflush(stdout);

        // Füge eine kurze Verzögerung hinzu, um die Ausgabe besser sichtbar zu machen
        // (Du kannst diese Zeile je nach Bedarf anpassen oder entfernen)
        sleep(100000);  // 100000 Mikrosekunden = 0,1 Sekunden
    }

    return 0;  // Dies wird nie erreicht, da das Programm in einer Endlosschleife bleibt
}
