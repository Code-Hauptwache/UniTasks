#include <stdio.h>

int main(void)
{

    int addition(int a, int b);
    {
        return a+b;
    }
    int subtraktion(int a,int b);
    {
        return a-b;
    }
    int multiplizieren(int a,int b);
    {
        return a*b;
    }
    int dividieren(int a,int b);
    {
        return a/b;
        if( 0 != a/b)
        {
            printf("Division durch 0 nicht möglich\n");
        }
    }
}
