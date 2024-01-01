// LA ILALHA ILA ALLAAAAAAH
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int randSymbol;

    srand(time(NULL));

    while (1)
    {
        randSymbol = rand() % 94 + 33;

        printf("%c", randSymbol);

        if (randSymbol == 126)
        {
            fflush(stdout);
        }

        Sleep(rand() % 90 + 11);
    }
}