#include <stdio.h>

int main()
{
    int a, b, c, d, p, q, r, i, ii, iii, iv, v, vi;
    printf("Geben sie den Wert für Variable a\n" );
    scanf("%i", &a);
    printf("Geben sie den Wert für Variable b\n" );
    scanf("%i", &b);
    printf("Geben sie den Wert für Variable c\n" );
    scanf("%i", &c);
    printf("Geben sie den Wert für Variable d\n" );
    scanf("%i", &d);
    printf("Geben sie den Wert für Variable p\n" );
    scanf("%i", &p);
    printf("Geben sie den Wert für Variable q\n" );
    scanf("%i", &q);
    printf("Geben sie den Wert für Variable r\n" );
    scanf("%i", &r);
    
    i = a*b*c*d;
    printf("Result: %i\n", i);

    ii = (a-b)%2>7;
    printf("Result: %i\n", ii);

    iii= (a*3)/(4/2);
    printf("Result: %i\n", iii);

    iv= (p || !q) < r;
    printf("Result: %i\n",iv);

    v= (p && !q) || !r;
    printf("Result: %i\n",v);
    
    vi= p || !q && r;
    printf("Result: %i\n");
}
