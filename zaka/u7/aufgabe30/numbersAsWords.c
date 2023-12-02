#include <stdio.h>

void convertThousendToWord(int num);
void convertHundredToWord(int num);
void convertTenToWord(int num);
void convertOneToWord(int num);
void convertRowOfTenToWord(int num);

int main()
{
    int numToWord;
    int scanfReturnValue;

    printf("        \033[1mConvert numbers to words\033[0m\n\n");
    printf("Please enter a initger between 9,999 and 0 you want to convert: ");
    scanfReturnValue = scanf("%d", &numToWord);

    if (scanfReturnValue != 1 || numToWord < 0 || numToWord > 9999)
    {
        printf("Invalid input. Please enter an integer between 9,999 and 0.\n");
        return 1;
    }

    if (numToWord == 0)
    {
        printf("zero\n");
        return 0;
    }

    convertThousendToWord(numToWord / 1000);
    convertHundredToWord((numToWord % 1000) / 100);
    
    if (9 < ((numToWord % 100) / 10) < 20)
    {
        convertRowOfTenToWord(numToWord % 100);
    }
    else
    {
        convertTenToWord((numToWord % 100) / 10);
        convertOneToWord(numToWord % 10);
    }

    return 0;
}

void convertThousendToWord(int num)
{
    switch (num)
    {
        case 0: 
            printf("");

            break;
        case 1: 
            printf("onethousend");

            break;
        
        case 2: 
            printf("twothousend");

            break;
        
        case 3: 
            printf("threethousend");

            break;
        
        case 4: 
            printf("fourthousend");

            break;
        
        case 5: 
            printf("fivethousend");

            break;
        
        case 6: 
            printf("sixthousend");

            break;
        
        case 7: 
            printf("seventhousend");

            break;
        
        case 8: 
            printf("eightthousend");

            break;
        
        case 9: 
            printf("ninethousend");

            break;
        
        default:
            break;
    }

}

void convertHundredToWord(int num)
{
    switch (num)
    {
        case 0: 
            printf("");

            break;
        case 1: 
            printf("onehundred");

            break;
        
        case 2: 
            printf("twohundred");

            break;
        
        case 3: 
            printf("threehundred");

            break;
        
        case 4: 
            printf("fourhundred");

            break;
        
        case 5: 
            printf("fivehundred");

            break;
        
        case 6: 
            printf("sixhundred");

            break;
        
        case 7: 
            printf("sevenhundred");

            break;
        
        case 8: 
            printf("eighthundred");

            break;
        
        case 9: 
            printf("ninehundred");

            break;
        
        default:
            break;
    }   
}

void convertTenToWord(int num)
{
    switch (num)
    {
        case 0: 
            printf("");

            break;

        case 2: 
            printf("twenty");

            break;
        
        case 3: 
            printf("thirty");

            break;
        
        case 4: 
            printf("fourty");

            break;
        
        case 5: 
            printf("fifty");

            break;
        
        case 6: 
            printf("sixty");

            break;
        
        case 7: 
            printf("seventy");

            break;
        
        case 8: 
            printf("eighty");

            break;
        
        case 9: 
            printf("ninety");

            break;
        
        default:
            break;
    }
}

void convertOneToWord(int num)
{
    switch (num)
    {
        case 1: 
            printf("one");

            break;
        
        case 2: 
            printf("two");

            break;
        
        case 3: 
            printf("three");

            break;
        
        case 4: 
            printf("four");

            break;
        
        case 5: 
            printf("five");

            break;
        
        case 6: 
            printf("six");

            break;
        
        case 7: 
            printf("seven");

            break;
        
        case 8: 
            printf("eight");

            break;
        
        case 9: 
            printf("nine");

            break;
        
        default:
            break;
    }
}

void convertRowOfTenToWord(int num)
{
    switch (num)
    {
        case 0: 
            printf("");

            break;

        case 11: 
            printf("eleven");

            break;
        
        case 12: 
            printf("twelve");

            break;
        
        case 13: 
            printf("thirteen");

            break;
        
        case 14: 
            printf("fourteen");

            break;
        
        case 15: 
            printf("fifteen");

            break;
        
        case 16: 
            printf("sixteen");

            break;
        
        case 17: 
            printf("seventeen");

            break;
        
        case 18: 
            printf("eighteen");

            break;
        
        case 19: 
            printf("nineteen");

            break;
        
        default:
            break;
    }
}