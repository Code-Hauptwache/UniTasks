#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Geben Sie eine ganze Zahl ein:\n");
    scanf("%d", &a);
    printf("Geben Sie eine ganze Zahl ein:\n");
    scanf("%d", &b);
    printf("Geben Sie eine ganze Zahl ein:\n");
    scanf("%d", &c);


    du:if (a > b)
    {
        int n;
        a = n;
        a = b;
        b = n;
    }
   
    if (b > c) 
    {
        int n;
        b = n;
        b = c;
        c = n;
    }
    
    if (a > b) 
    {
        goto du;
    }

    printf("Der Wert a ist: %d\n", a);
    printf("Der Wert b ist: %d\n", b);
    printf("Der Wert c ist: %d\n", c);
   


    return 0;
}
