#include <stdio.h>

int main()
{
    const int wahr = 1;
    const int falsch = 0;

    printf("x\ty\t|\tNOT x\tNOT y\tx AND y\tx OR y\tx XOR y\t~x\n");
    printf("WAHR\tWAHR\t|\t%i\t%i\t%i\t%i\t%i\t%i\n", !wahr, !wahr, wahr && wahr, wahr || wahr, wahr != wahr,!wahr);
    printf("WAHR\tFALSCH\t|\t%i\t%i\t%i\t%i\t%i\t%i\n", !wahr, !falsch, wahr && falsch, wahr || falsch, wahr != falsch, !wahr);
    printf("FALSCH\tWAHR\t|\t%i\t%i\t%i\t%i\t%i\t%i\n", !falsch, !wahr, falsch && wahr, falsch || wahr, falsch != wahr, falsch);
    printf("FALSCH\tFALSCH\t|\t%i\t%i\t%i\t%i\t%i\t%i\n", !falsch, !falsch, falsch && falsch, falsch || falsch, falsch != falsch, falsch);

}
