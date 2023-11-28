#include <stdio.h>

int main(void)
{

}

float quadratEinerFliesskommazahl(float x)
{
    return x*x; 
}

int quadratEinerGanzzahl(int n)
{
    return n*n;
}

int summeDerErstenNNatuerlichenZahlen(int n)
{
    if(n<0)
    {
        printf("Dies ist nicht möglich\n"); 
        return 0;
    }   
    else
    {
        return (n*(n+1))/2;
    }
void summeDerNatuerlichenZahlenVonMBisN(int m, int n)
{
    if(m>n || m<0 || n<0)
    {
        printf("Fehlermeldung! Ungültige Zahlen!\n");
        return 0;
    }


}
}
