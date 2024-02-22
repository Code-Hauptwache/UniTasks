#include "advanced_console_output.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main()
{
    int b, h;

    srand(time(NULL));
    clear();

    b = get_screen_width();
    h = get_screen_height();

    set_fg_color("blue");

    for(int s=1 ; s<b; s++)
    {
        locate(s, h);
        printf("-");
    }

    locate(b, h);
    printf(">");

    for(int z= 0;z<=h;z++)
    {
        locate(0, z);
        printf("|");
    }

    locate(1, h);
    printf("+");

    set_text_bold();    //Fett
    set_bg_color("red");    //Hintergrund ist Rot

    // d)
    int y = rand()%h+1;

    locate(1, y);
    printf("*");

    for (int i = 2; i <= b; i++)
    {
        int a = rand()%3;

        y = y + (a-1);

        if (y < 1)
        {
            y = 2;
        }

        if (y > h)
        {
            y = h;
        }

        locate(i, y);
        printf("*");

        fflush(stdout);
        sleep(1);

    }

    unset_text_bold();
    set_bg_color("default");

    locate(0, h);
    printf("\n");


    return 0;
}
