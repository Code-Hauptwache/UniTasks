#include <stdio.h>

int checkPrime(int num);
int nextSmallerPrime(int num);
int nextLargerPrime(int num);

int main()
{
    int num;

    do
    {
        printf("Please enter a number larger than one: ");
        if (scanf("%i", &num) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Clear the input buffer
        }
    } while (num < 2);

    if (checkPrime(num) && num > 2)
        printf("%i is a prime number. The next smaller prime of %i is %i and the next larger is %i\n", num, num, nextSmallerPrime(num), nextLargerPrime(num));
    else if (checkPrime(num))
        printf("%i is the smallest prime number. The next larger prime of %i is %i.\n", num, num, nextLargerPrime(num));
    else
        printf("%i is not a prime number\n", num);

    return 0;
}

int checkPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return 0;
    }

    return 1;
}

int nextSmallerPrime(int num)
{
    for (int i = 1; num - i > 1; i++)
    {
        if (checkPrime(num - i)) return num - i;
    }
    return -1; // Return -1 if no smaller prime is found (should not happen for num > 2)
}

int nextLargerPrime(int num)
{
    for (int i = 1; ; i++)
    {
        if (checkPrime(num + i)) return num + i;
    }
}
