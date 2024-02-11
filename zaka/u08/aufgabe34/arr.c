#include <stdio.h>

void ausgabe();
int summe();

int nums[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter the %d. number: ", i);
        scanf("%d", nums[i]);
    }

    printf("\n");

    ausgabe();
}

void ausgabe()
{
    printf("The numbers you entered are: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", nums[i]);
    }
}

int summe()
{
    int summe;

    for (int i = 0; i < 10; i++)
    {
        summe += nums[i];
    }

}
