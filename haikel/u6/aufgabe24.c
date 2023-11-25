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
    if(m>n)
    {
        printf("Die Rechnung liegt nicht im Rahmen der Elemente\n");
    }
    else if(n <0)
    {
        printf("Die Rechnung liegt nicht im Rahmen der Elemente\n");
    }
    else if (m<0)
    {
        printf("Die Rechnung liegt nicht im Rahmen der Elemente\n");
    }
    else
    {
        printf("Die Summe der natürlichen Zahlen von m bis n: ((%lf-%lf+1)*(%lf+%lf)) = %lf\n", n,m,((n-m+1)*(m+n))/2);
    }

}
}
