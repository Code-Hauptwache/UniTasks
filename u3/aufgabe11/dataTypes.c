#include <stdio.h>

int main()
{
    printf("Ein unsigned short intiger belegt %ld bits\n", sizeof(unsigned short int) * 8);
    printf("Ein unsigned short belegt %ld bits\n", sizeof(unsigned char) * 8);
    printf("Ein char belegt %ld bits.\n", sizeof(char) * 8);
    printf("Ein Intiger belegt %ld bits.\n", sizeof(int) * 8);
    printf("Ein short intiger belegt %ld bits.\n", sizeof(short int) * 8);
    printf("Ein float belegt %ld bits.\n", sizeof(float) * 8);
    printf("Ein double belegt %ld bits.\n", sizeof(double) * 8);
}