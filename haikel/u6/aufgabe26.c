#include <stdio.h>

int main (void)
{
    int i= 13;
    int j= 28;
    for(i; i < j-1; i += 2)
{
    printf("%d ", i);
}
    printf("\n");
    return 0;
}
