#include <stdio.h>
#include <gmp.h>

int main()
{
    int i = 1;
    while (i < 51)
    {
        mpz_t trueFactorial;
        mpz_init(trueFactorial);
        mpz_fac_ui(trueFactorial, i);

        unsigned long long factorial = 1;

        int j = 1;
        while (j <= i)
        {
            factorial = factorial * j;

            j++;
        }

        printf("%d! = %llu\n", i, factorial);
        printf("The Corret answer to %d! is: ", i);
        mpz_out_str(stdout, 10, trueFactorial);
        printf("\n\n");

        mpz_clear(trueFactorial);

        i++;
    }
}

// b)
//  Bis 20! ist das Ergebniss mit dem gößtem datentyp für positive Ganzzahlen (unsigned long long) korrekt.
