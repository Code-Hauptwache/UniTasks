/*
 * Testprogramm für die Nutzung der Bibliothek "Advanced Console Output" (ACO)
 *
 * (c) Thomas Gabel, 2019-23
 */

#include "advanced_console_output.h"
#include <stdio.h>

int main()
{
    int w, h, dum, i, j, k;
    w = get_screen_width();
    h = get_screen_height();
    printf("Dimensionen der Konsole (Breite x Höhe, d.h. Spalten x Zeilen): %dx%d\n", w, h);

    printf("Weiter (1) oder Ende (2)? "); scanf("%d", &dum); if (dum==2) return 0;
    clear();
    
    locate( 30, 3 ); // setzt den Cursor in Spalte 30 in Zeile 3 und macht dort eine Ausgabe
    printf("HALLO WELT in Zeile 3 und Spalte 30!\n");
    
    printf("Weiter (1) oder Ende (2)? "); scanf("%d", &dum); if (dum==2) return 0;
    clear();
    
     printf("Texte in verschiedenen Farbkombinationen:\n");
     set_fg_color("red");
     printf("HALLO WELT");
     set_fg_color("cyan");
     printf("HALLO WELT");
     set_bg_color("green");
     printf("HALLO WELT");
     set_fg_color("default");
     set_bg_color("default");
     printf("HALLO WELT\n");
 
    printf("Weiter (1) oder Ende (2)? "); scanf("%d", &dum); if (dum==2) return 0;
    clear();

    printf("Alle denkbaren Farbkombinationen für die Vordergrundfarbe im RGB-Raum:\n");
    for (i=0; i<256; i+=10)
      for (j=0; j<256; j+=10)
        for (k=0; k<256; k+=10)
        {
          set_fg_color_rgb(i, j, k);
          printf("*");
        }
    printf("\n");

    printf("Weiter (1) oder Ende (2)? "); scanf("%d", &dum); if (dum==2) return 0;
    clear();

    printf("\nAlle denkbaren Grautöne:\n");
    for (i=0; i<256; i+=1)
    {
          set_fg_color_rgb(i, i, i);
          printf("*");
    }
    printf("\n");

    printf("Weiter (1) oder Ende (2)? "); scanf("%d", &dum); if (dum==2) return 0;
    clear();

    printf("Textverzierungen:\n");
    printf("normal: HI \n");
    set_text_bold();
    printf("fett: HI \n");
    unset_text_bold();
    set_text_italic();
    printf("kursiv: HI \n");
    unset_text_italic();
    set_text_underlined();
    printf("unterstrichen: HI \n");
    unset_text_underlined();
    set_text_blinking();
    printf("blinkend: HI \n");
    unset_text_blinking();
    set_text_crossedout();
    printf("durchgestrichen: HI \n");
    unset_text_crossedout();
    printf("\n");
    
    return 0;
}
