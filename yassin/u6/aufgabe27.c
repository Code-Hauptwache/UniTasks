#include <stdio.h>

int main()
{       
    char stoff;

    while (1)
    {
        printf("Geben sie einen Element mit einer Buchstabe ein:  \n");
        scanf(" %c", &stoff);

        if (stoff == '0')
        {
            printf("Programm endet.\n");
            break;
        }
    

        switch (stoff)
        {
            case 'S':
            case 's': 
                printf("Schwefel\n");
                break;

            case 'h':
            case 'H':
                printf("Wasserstoff\n");
                break;

            case 'O':
            case 'o':
                printf("Sauerstoff\n");
                break;

            case 'K':
            case 'k':
                printf("Kalium\n");
                break;
            
            case 'U':
            case 'u':
                printf("Uran\n");
                break;
        
            case 'N':
            case 'n':
                printf("Stickstoff\n");
                break;

            case 'P':
            case 'p':
                printf("Phosphor\n");
                break;

            default:
                printf("Unbekannter Buchstabe\n");   
        
        }
    }
    return 0;
}