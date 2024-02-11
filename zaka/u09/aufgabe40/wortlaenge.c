#include <stdio.h>

int main ()
{
    char str[100];
    int wordLen = 0;

    printf("Please enter a word: ");
    scanf("%s99", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        wordLen++;
    }

    printf("\nThe number of letters in the entered word is: %d\n", wordLen);

    printf("The actual size of the C string is %d\n\n", wordLen + 1);

    return 0;
}
