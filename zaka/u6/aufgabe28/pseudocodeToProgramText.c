#include <stdio.h>

int main()
{
    int a;

    printf("Please enter a integer: ");
    scanf("%d", &a);

    if (a > 0)
    {
        int i;
        int j;

        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}