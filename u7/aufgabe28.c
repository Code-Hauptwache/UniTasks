#include <stdio.h>

int main()
 {
    int i = 5;
    
    for (; i > 0 && i % 2 == 0;) 
    {
        printf("%d ", i);
        i--;
    }

    return 0;
}
