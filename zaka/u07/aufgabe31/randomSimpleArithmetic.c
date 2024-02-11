#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

void printAnimation(char str[], int speed);
void printAnimationWithDelay(char str[]);
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
float division(int num1, int num2);

int main()
{
    int randNum1;
    int randNum2;
    char randNums[50];
    char welcome[] = "        \033[1mWelcome to the Random Calculator!\033[0m\n\n";
    char welcome2[] = "This program will generate two random numbers between 0 and 100 and do some simple calculations with them!\n";
    char welcome3[] = "Press enter to continue...";
    char coninue;
    char solutionAddition[50];
    char solutionSubtraction[50];
    char solutionMultiplication[50];
    char solutionDivision[50];
    char cannotDivide[50];
    
    printAnimation(welcome, 25);
    printAnimation(welcome2, 25);
    printAnimation(welcome3, 50);

    do
    {
        coninue = getchar();
    } while (coninue != 10);

    srand(time(NULL));
    
    randNum1 = rand() % 100;
    randNum2 = rand() % 100;

    sprintf(randNums, "\nYour two random numbers are: %d and %d!\n\n", randNum1, randNum2);
        
    printAnimationWithDelay(randNums);
    
    sprintf(solutionAddition, "The addition of %d and %d is: %d\n", randNum1, randNum2, addition(randNum1, randNum2));
    sprintf(solutionSubtraction, "The subtraction of %d and %d is: %d\n", randNum1, randNum2, subtraction(randNum1, randNum2));
    sprintf(solutionMultiplication, "The multiplication of %d and %d is: %d\n", randNum1, randNum2, multiplication(randNum1, randNum2));
    sprintf(solutionDivision, "The division of %d and %d is: %f\n", randNum1, randNum2, division(randNum1, randNum2));
    
    printAnimationWithDelay(solutionAddition);
    printAnimationWithDelay(solutionSubtraction);
    printAnimationWithDelay(solutionMultiplication);
    
    if (randNum2 == 0)
    {
        sprintf(cannotDivide, "The division of %d and %d has no solution since dividing by zero is not possible.\n", randNum1, randNum2);
        printAnimationWithDelay(cannotDivide);
    }
    else
    {
        printAnimationWithDelay(solutionDivision);
    }

    return 0;
}

void printAnimation(char str[], int speed)
{
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
        
        Sleep(speed);
    }
}

void printAnimationWithDelay(char str[])
{
    int trackChar = 0;

    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        
        if (str[i] == ':')
        {
            Sleep(300);
            trackChar++;
        }

        if (trackChar == 1)
            Sleep(150);
        else
            Sleep(50);
    }
}

int addition(int num1, int num2)
{
    
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

float division(int num1, int num2)
{
    return (float)num1 / num2;
}