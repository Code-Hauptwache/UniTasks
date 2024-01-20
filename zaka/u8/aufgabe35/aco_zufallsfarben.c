#include "advanced_console_output.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int width;
    int height;

    srand(time(NULL));

    get_screen_dimension(&width, &height);

    //printf("w: %d, h: %d", width, height);

    while(1)
    {
        locate(rand() % (width + 1), rand() % (height +1));

        set_bg_color_rgb(rand() % 256, rand() % 256, rand() % 256);

        printf(" ");

        fflush(stdout);

        sleep(0.001);
    }
}
