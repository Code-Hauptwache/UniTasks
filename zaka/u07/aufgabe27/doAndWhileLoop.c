#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a intiger for n: ");
    scanf("%d", &n);

    sum = 0;
    
    if (n > -3)
    {
        do
        {
            sum += n;
            n--;
        } while (n > -3);
    }

    printf("The sum is: %d\n", sum);

    return 0;
}