#include <stdio.h>

int checkEvenNum(int num);

int main()
{
    int odds[10];
    int evens[10];
    int countOddsArr = 0;
    int countEvensArr = 0;

    for (int i = 1; i <= 10; i++)
    {
        int temp;

        printf("\nPlease enter the %d. intiger: ", i);
        scanf("%d", &temp);

        if (checkEvenNum(temp))
        {
            evens[countEvensArr] = temp;

            countEvensArr++;
        }
        else
        {
            odds[countOddsArr] = temp;

            countOddsArr++;
        }
    }

    printf("\nThese following numbers you entered are odd: ");

    for (int i = 0; i < countOddsArr; i++)
        printf("%d ", odds[i]);

    printf("\nAnd these following numbers you entered are even: ");

    for (int i = 0; i < countEvensArr; i++)
        printf("%d ", evens[i]);

    printf("\n");

    return 0;
}

int checkEvenNum(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}
