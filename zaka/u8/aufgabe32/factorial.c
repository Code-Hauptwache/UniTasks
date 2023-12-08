#include <stdio.h>
#include <gmp.h>

int main()
{
    for (int i = 0; i < 51; i++)
    {
        mpz_t trueFactorial;
        mpz_init(trueFactorial);
        mpz_fac_ui(trueFactorial, i);

        unsigned long long factorial = 1;

        for (int j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        printf("%d! = %llu\n", i, factorial);
        printf("The Corret answer to %d! is: ", i);
        mpz_out_str(stdout, 10, trueFactorial);
        printf("\n\n");

        mpz_clear(trueFactorial);
    }
}

// b)
//  Bis 20! ist das Ergebniss mit dem gößtem datentyp für positive Ganzzahlen (unsigned long long) korrekt.
