// Zakaria Boujana MN: 1512968

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    double schätzwertFacultät;

    do
    {
        printf("Bitte gebe eine natürliche zahl ein: ");
        scanf("%d", &num);
    }
    while (num < 0);

    schätzwertFacultät = (long)sqrt(2*M_PI*num) * pow(num/M_E, num);

    if (num <= 20)
    {
        long int fac = 1;

        for (int i = num; i  > 0; i--)
        {
            fac = fac * i;
        }

        printf("Die Stringler-Formel liefert als Abschätzung für %d!: %0.2f\n", num, schätzwertFacultät);
        printf("Die Fakultät von %d! ist %ld. Fehler in Prozent: %0.1f%%\n", num, fac, ((fac-schätzwertFacultät)/schätzwertFacultät) * 100);
    }
    else
    {
        printf("Der Schätzwert für die Fakultät von %d! nach der Stirling-Formel ist %0.2f\n",num, schätzwertFacultät);
        printf("Exakte Berechnung der Fakultät %d! nicht möglich\n", num);
    }

    return 0;
}
