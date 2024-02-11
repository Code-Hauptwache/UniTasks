#include <stdio.h>
#include <string.h>

void checkIfOnlyLetters (char str[]);

int main()
{
    char word1[] = {'a', 'b', 's', 'D', 'F', 'G', '1', 'j', 'k', '2', '\0'};
    char word2[] = {65, 69, 90, 83, 102, 78, 71, 98, 119, 48, 0};
    char word3[] = "lllllll1ll";

    checkIfOnlyLetters(word1);
    checkIfOnlyLetters(word2);
    checkIfOnlyLetters(word3);

    return 0;
}

void checkIfOnlyLetters (char str[])
{
    int check = 1;
    int strLength = strlen(str);

    for (int i = 0; i < strLength; i++)
    {
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
        {
            str[i] = '*';
            check = 0;
        }
    }

    if (check)
        printf("\nValid string. The given string does contain letters only.\n%s\n", str);
    else
        printf("\nInvalid string. The given string does not contain letters only. Non alphabetical charackter will be replaced with *.\n%s\n", str);
}
