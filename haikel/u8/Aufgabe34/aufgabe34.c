#include <stdio.h>

int main()
//                                                           && || += -= *= <= >= usw.
{
    int beate;
    int alfonso;
    int christian;
    int doris;
    int alle;

    printf("Choose your number : ");
    scanf("%i", &beate);

    if (beate >= 1)
    {
        printf("Wenn Beate geht, dann geht auch Christian mit.\n");
    }
     else if(beate < 1)
    {
        printf("Beate bleibt zuhause, wenn Alfonso und Christian gehen\n");
    }
    else
    {
        printf("Beate geht, dann geht Doris oder Christian.\n");
    }

    printf("Choose your second number : ");
    scanf("%i", &alfonso);

    if(alfonso < 0)
    {
        printf("Alfonso bleibt zuhause und es gehen entweder Doris oder Christian.\n");
    }
    else if(alfonso >=1)
    {
        printf("Wenn Alfonso zuhause bleibt, dann geht Doris,.\n");
    }
    else
    {
        printf("Wenn Alfonso zuhause bleibt und Doris auch, geht Christian.\n");
    }

    printf("Choose youre third number : ");
    scanf("%i", &doris);

    if(doris == 0)
    {
        printf("Doris geht mit Beate\n");
    }
    else if(doris >= 1)
    {
        printf("Wenn Doris geht, geht Alfonso auf keinen Fall.\n");
    }
    else
    {
        printf("Wenn Doris geht, geht Christian und Alfonso nicht, aber Beate.\n");
    }

    printf("Choose youre fourth number : ");
    scanf("%i", &christian);

    if(christian == 0)
    {
        printf("Wenn Alfonso und Christian gehen, geht Beate nicht hin.\n");
    }
    else if(christian > 0)
    {
        printf("Wenn Christian geht, dann geht auch Alfonso, aber Beate nicht.\n");
    }
    else
    {
        printf("Christian geht mit Doris, aber Alfonso kommt nicht mit.\n");
    }

    printf("Choose your fifth number : ");
    scanf("%i", &alle);

    if(alle == 0)
    {
        printf("Es geht mindestens nur Alfonso.\n");
    }
    else if(alle ==1)
    {
        printf("Es geht mindestens nur Beate.\n");
    }
    else if(alle == 2)
    {
        printf("Es geht mindestens nur Christian.\n");
    }
    else
    {
        printf("Es geht mindestens nur Doris.\n");
    }
        return 0;
}
