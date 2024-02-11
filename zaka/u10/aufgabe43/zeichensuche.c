#include <stdio.h>
#include <string.h>

int main (void)
{
    int c;
    int strLen;
    int count = 0;
    int charPosition[50];
    char word[] = "asdako234kfao874f<dsj11llasd9as8kg%\"+asd90101jgj";

    printf("Following string is given: %s\n\n", word);
    printf("Please enter a character to check for its presence in the given string: ");
    c = getchar();

    strLen = strlen(word);

    for (int i = 0; i < strLen; i++)
    {
        if (c == word[i])
        {
            charPosition[count] = i;
            count++;
        }
    }

    printf  ("\n");

    if (count)
    {
        printf("The specified character was found at the following positions in the string: ");

        if (count == 1)
        {
            printf("%d.\n", charPosition[0]);
        }
        else if (count == 2)
        {
            printf("%d, %d\n", charPosition[0], charPosition[1]);
        }
        else
        {
            int i;

            printf("%d", charPosition[0]);

            for (i = 1; i < count - 1; i++)
            {
                printf(", %d", charPosition[i]);
            }

            printf(", %d.\n", charPosition[i++]);
        }
    }
    else
    {
        printf("The specified character was not found in the given string.\n");
    }

    return 0;
}
