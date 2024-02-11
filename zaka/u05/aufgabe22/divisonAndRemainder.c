#include <stdio.h>

const unsigned int c = 6236;

int main ()
{
    int s;
    int scanfReturnValue;
    unsigned int weeks;
    unsigned int days;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;

    printf("\n      \033[1mSeconds to Weeks-Days-Hours-Minutes-Seconds Converter\033[0m\n");
    printf("Please enter a positive integer: ");
    scanfReturnValue = scanf("%i", &s);

    if (scanfReturnValue != 1 || s < 0)
    {
        printf("\nInput is not a positive intiger!\n");

        printf("Using the default value of %u seconds.\n", c);
        s = c;
    }
    else if ( s == 0)
    {
        printf("\n0 is not a positive integer. Please enter a positive integer!\n");

        printf("Using the default value of %u seconds.\n", c);
        s = c;
    }

    weeks = s / (7 * 24 * 60 * 60);
    days = (s - weeks * 7 * 24 * 60 * 60) / (24 * 60 * 60);
    hours = (s - weeks * 7 * 24 * 60 * 60 - days * 24 * 60 * 60) / (60 * 60);
    minutes = (s - weeks * 7 * 24 * 60 * 60 - days * 24 * 60 * 60 - hours * 60 * 60) / 60;
    seconds = s - weeks * 7 * 24 * 60 * 60 - days * 24 * 60 * 60 - hours * 60 * 60 - minutes * 60;

    printf("\n\033[1m%u seconds = \033[0m ", s);
    printf("%u W + %u d + %u h + %u min + %u s", weeks, days, hours, minutes, seconds);
}