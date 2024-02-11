#include <stdio.h>

int main()
{
    char c;
    int scanfReturnValue;

    do
    {
        printf("Please enter a chemical symbol (enter '0' to quit): ");
        scanfReturnValue = scanf(" %c", &c);

        if (scanfReturnValue != 1)

        switch (c)
        {
            case 'H':
            case 'h':
                printf("Hydrogen (Wasserstoff)\n");
                break;
            case 'O':
            case 'o':
                printf("Oxygen (Sauerstoff)\n");
                break;
            case 'N':
            case 'n':
                printf("Nitrogen (Stickstoff)\n");
                break;
            case 'C':
            case 'c':
                printf("Carbon (Kohlenstoff)\n");
                break;
            case 'S':
            case 's':
                printf("Sulfur (Schwefel)\n");
                break;
            case 'P':
            case 'p':
                printf("Phosphorus (Phosphor)\n");
                break;
            case 'K':
            case 'k':
                printf("Potassium (Kalium)\n");
                break;
            case 'I':
            case 'i':
                printf("Iodine (Iod)\n");
                break;
            case 'F':
            case 'f':
                printf("Fluorine (Fluor)\n");
                break;
            case 'B':
            case 'b':
                printf("Boron (Bor)\n");
                break;
            case 'V':
            case 'v':
                printf("Vanadium (Vanadium)\n");
                break;
            case 'W':
            case 'w':
                printf("Tungsten (Wolfram)\n");
                break;
            case 'U':
            case 'u':
                printf("Uranium (Uran)\n");
                break;
            case 'Z':
            case 'z':
                printf("Zinc (Zink)\n");
                break;
            case 'A':
            case 'a':
                printf("Argon (Argon)\n");
                break;
            case 'X':
            case 'x':
                printf("Xenon (Xenon)\n");
                break;
            case 'R':
            case 'r':
                printf("Radon (Radon)\n");
                break;
            default:
                printf("Unknown chemical symbol");
        }

    } while (c != '0');

    return 0;
}
