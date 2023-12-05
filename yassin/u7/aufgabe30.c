#include <stdio.h>

void nummerAlsWort(int ziffer);

int main ()
{
    int nummer;
    

    printf("Geben Sie eine Ganzzahl ein: ");
    scanf("%d", &nummer);
    
    if (nummer < 0 || nummer >= 1000) 
    {
        printf("ungültig ");
        return 1;  
    } 
    int nummer100 = nummer / 100;  
    int nummer10 = (nummer % 100)/ 10;  
    int nummer1 = nummer % 10;  
    if (nummer >= 0 && nummer <= 9)
    { 
        nummerAlsWort(nummer1);
    }
    else if (nummer >= 10 && nummer <=99)
    {
       nummerAlsWort(nummer10),nummerAlsWort(nummer1);
    }
   else if(nummer >= 100 && nummer <= 999)
   {
    nummerAlsWort(nummer100), nummerAlsWort(nummer10), nummerAlsWort(nummer1);
   }
   

    return 0;
    
}
void nummerAlsWort(int ziffer)
{
    switch(ziffer)
    {   case 0:
           printf("null ");
            break;
        case 1:
            printf("eins ");
            break;
        case 2:
            printf("zwei ");
            break;
        case 3:
            printf("drei ");
            break;
        case 4:
            printf("vier ");
            break;
        case 5:
            printf("funf ");
            break;
        case 6:
            printf("sechs ");
            break;
        case 7:
            printf("sieben ");
            break;
        case 8:
            printf("acht ");
            break;
        case 9:
            printf("neun ");
            break;
        default:
            printf("ungultige Ziffer ");
    }
}
