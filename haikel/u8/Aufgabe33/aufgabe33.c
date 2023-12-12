#include <stdio.h>

int main()
{
    int i;;
    int factorial =1;

    for(i=0;i<=50;++i)
    {
        if(i>1)
        {
            factorial*=i;

        }
            printf("The Factorial of %d is : %d\n",i,factorial);
    }
            return 0;
}


//b) ab 33 geht es nicht mehr weiter
