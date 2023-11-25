#include <stdio.h>

int main (void)
{
    
    printf("%ld Bit\n", sizeof(char) * 8);
    printf("%ld Bit\n", sizeof(int) * 8);
    printf("%ld Bit\n", sizeof(short int) * 8);
    printf("%ld Bit\n", sizeof(float) * 8);
    printf("%ld Bit\n", sizeof(double) * 8);
    return 0;
}
