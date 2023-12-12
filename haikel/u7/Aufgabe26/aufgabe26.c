#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Geben Sie ihre erste Zahl an : \n");
    scanf("%i",&a);
    printf("Geben Sie ihre zweite Zahl an : \n");
    scanf("%i",&b);
    printf("Geben Sie ihre letzte Zahl an : \n");
    scanf("%i",&c);
    jump:if(a>b)
        {
            int n = a;
                a = b;
                b = n;

        }
         if(b>c)
        {
            int n = b;
                b = c;
                c = n;
        }
        if(a>b)
        {
            goto jump;
        }
            printf("a: %i\n",a);
            printf("b: %i\n",b);
            printf("c: %i\n",c);

            return 0;
}
