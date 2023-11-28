#include <stdio.h>

int main(void)

{
    char element;
    printf("Bitte geben sie ein chemisches Element ein: ");
    do
    {
        scanf(" %c", &element);
        switch (element)
        {

        case 'H':
        case 'h':
            printf("Wasserstoff\n");
            break;
        case 'B':
        case 'b':
            printf("Bor\n");
            break;
        case 'C':
        case 'c':
            printf("Kohlenstoffdioxid\n");
            break;
        case 'S':
        case 's':
            printf("Schwefel\n");
            break;
        case 'U':
        case 'u':
            printf("Uran\n");
            break;
        default:
        printf("Unbekanntes Element\n");
        }
      }
      while (element == 'O');
        printf("Break!\n");

}


