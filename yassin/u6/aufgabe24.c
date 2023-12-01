#include <stdio.h>

float quadratEinerFliesskommazahl(float x);
int quadratEinerGanzzahl(int n);
int summeDerErstenNNatuerlichenZahlen(int n);
void summeDerNatuerlichenZahlenVonMBisN(int m, int n);

int main()
{
    int choice;
    int scanfReturnValue;

    printf("\n      \033[1mWelcome to the 'Mathematical Functions' program!\033[0m\n\n");

    printf("1. Square of a floating point number\n");
    printf("2. Square of an integer\n");
    printf("3. Sum of the first 'n' natural numbers\n");
    printf("4. Sum of all natural numbers from 'm' to 'n'\n");

    printf("Please enter the number of the operation you wish to perform: ");
    scanfReturnValue = scanf("%i", &choice);

    if (choice < 1 || choice > 4 || scanfReturnValue != 1)
    {
        printf("Invalid input. The program will now terminate.\n");

        return 1;
    }

    switch (choice)
    {
        case 1:
            {
                float x;

                printf("Please enter the floating point number you wish to square: ");
                scanfReturnValue = scanf("%f", &x);

                if (scanfReturnValue != 1)
                {
                    printf("Invalid input. The program will now terminate.\n");

                    return 1;
                }

                printf("The square of %.2f is %.2f.\n", x, quadratEinerFliesskommazahl(x));

                break;
            }
        case 2:
            {
                int n;

                printf("Please enter the integer you wish to square: ");
                scanfReturnValue = scanf("%i", &n);

                if (scanfReturnValue != 1)
                {
                    printf("Invalid input. The program will now terminate.\n");

                    return 1;
                }

                printf("The square of %d is %d.\n", n, quadratEinerGanzzahl(n));

                break;
            }
        case 3:
            {
                int n;

                printf("Please enter the integer 'n' up to which you wish to sum all natural numbers: ");
                scanfReturnValue = scanf("%i", &n);

                if (scanfReturnValue != 1)
                {
                    printf("Invalid input. The program will now terminate.\n");

                    return 1;
                }

                printf("The sum of the first %d natural numbers is %d.\n", n, summeDerErstenNNatuerlichenZahlen(n));

                break;
            }
        case 4:
            {
                int m, n;

                printf("Please enter the integers 'm' and 'n' between which you wish to sum all natural numbers: ");
                scanfReturnValue = scanf("%i %i", &m, &n);

                if (scanfReturnValue != 2)
                {
                    printf("Invalid input. The program will now terminate.\n");

                    return 1;
                }

                summeDerNatuerlichenZahlenVonMBisN(m, n);

                break;
            }
    }

    return 0;
}

float quadratEinerFliesskommazahl(float x) 
{
    return x * x;
}

int quadratEinerGanzzahl(int n)
{
    return n * n;
}

int summeDerErstenNNatuerlichenZahlen(int n)
{
    if (n < 0)
    {
        printf("Error: n can not be negative. The result of the function will be 0.\n");
        return 0;
    }
        
    return n*(n+1)/2; 
}
void summeDerNatuerlichenZahlenVonMBisN(int m, int n)
{
  if(m <= n)
  {
    int summeMBisN;

    summeMBisN = summeDerErstenNNatuerlichenZahlen(n) - summeDerErstenNNatuerlichenZahlen(m - 1);
    printf("Die Summe von %i bis %i ist %i", m, n, summeMBisN);
  }
  else if(m < 0 || n < 0 || m > n)
  {
    printf("Error: inavalid input.\n");
  }
} 
