#include <stdio.h>

int main()
{
    int name[50];

    printf("What is your name? ");
    scanf("%s", name);

    for (int i = 0; i < 25; i++)
    {
        printf("%i. Hello %s\n", i + 1, name);
    }

    return(0);
}