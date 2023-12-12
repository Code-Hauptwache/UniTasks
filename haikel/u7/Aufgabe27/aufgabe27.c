#include <stdio.h>

int main(void)

{
    int n, sum;
    scanf("%d", &n);
    sum = 0;
    do
    {
        if(n>0)
        {

        sum += n;
        n--;

        }

    } while (n > -3);

            printf("%i\n",sum);
}
