#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(clock());
    int randomoperand1 = rand()%10;
    int randomoperand2 = rand()%10;
    int operator = (rand()%4)+1;
    switch(operator)
        {
        case 1:
            printf("%i+%i= %i\n", randomoperand1,randomoperand2,randomoperand1+randomoperand2);
            break;
        case 2:
            printf("%i-%i= %i\n", randomoperand1,randomoperand2, randomoperand1-randomoperand2);
            break;
        case 3:
            printf("%i*%i= %i\n", randomoperand1,randomoperand2, randomoperand1*randomoperand2);
            break;
        case 4:
            printf("%i/%i= %i\n", randomoperand1,randomoperand2, randomoperand1/randomoperand2);
            break;
        }
}
