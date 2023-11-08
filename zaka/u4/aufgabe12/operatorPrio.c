#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2, d = 4;
    int p = 1, q = 0, r = 1;
    
    printf("i) (a * b) * (c * d) = %d\n", (a * b) * (c * d));
    printf("ii) (a - (b %% 2)) > 7 = %d\n", (a - (b % 2)) > 7);
    printf("iii) (a * 3) / (4 / 2) = %d\n", (a * 3) / (4 / 2));
    printf("iv) (p || ((!q) < r)) = %d\n", p || ((!q) < r));
    printf("v) ((p && q) || (!r)) = %d\n", (p && q) || (!r));
    printf("vi) (p || ((!q) && r)) = %d\n", p || ((!q) && r));

    return 0;
}
