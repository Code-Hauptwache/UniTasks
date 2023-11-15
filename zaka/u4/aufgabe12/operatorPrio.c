#include <stdio.h>

int main() {
    int a, b, c, d;
    float q, p, r;

    printf("Please enter four integers:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);

    printf("Please enter three floating-point numbers now:\n");
    printf("q: ");
    scanf("%f", &q);
    printf("p: ");
    scanf("%f", &p);
    printf("r: ");
    scanf("%f", &r);
    
    printf("\033[1mArithmetic with parentheses\tArithmetic without parentheses\n\033[0m");
    printf("i) (a * b) * (c * d) = %d\ti) a * b * c * d = %d\n", (a * b) * (c * d), a * b * c * d);
    printf("ii) (a - (b %% 2)) > 7 = %d\tii) a - b %% 2 > 7 = %d\n", (a - (b % 2)) > 7, a - b % 2 > 7);
    printf("iii) (((a * 3) / 4) / 2) = %d\tiii) a * 3 / 4 / 2 = %d\n", (((a * 3) / 4) / 2), a * 3 / 4 / 2);
    printf("iv) (p || ((!q) < r)) = %d\tiv) p || !q < r = %d\n", p || ((!q) < r), p || !q < r);
    printf("v) ((p && q) || (!r)) = %d\tv) p && q || !r = %d\n", (p && q) || (!r), p && q || !r);
    printf("vi) (p || ((!q) && r)) = %d\tvi) p || !q && r = %d\n", p || ((!q) && r), p || !q && r);

    return 0;
}
