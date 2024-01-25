#include <stdio.h>

nextSmallerPrime(int n);
nextLargerPrime(int n);

int main()
{
    int num;
    int checkPrime = 1;

    do
    {
        printf("Please enter number lager than one: ");
        scanf("%i", &num);
    } while (num < 2);

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) checkPrime = 0;
    }

    if (checkPrime == 1)
        printf("%i is a prime number. The next smaller prime of %i is %i and the next larger is %i\n", num, num, nextSmallerPrime(num), nextLargerPrime(num));
    else
        printf("%i is not a prime number\n", num);
}

nextSmallerPrime(int n)
{

}

nextLargerPrime(int n)
{

}
