#include <stdio.h>

int main(void) {
    
    int a = 1;
    unsigned b = 1u;
    float f = 1.f;
    double d = 1.;
    char c = 100;
    long l = 1L;

    printf("%c\n%d\n", c, a);

    int i10 = 10;
    int i16 = 0xA;
    int i8 = 012;

    printf("%d\n%d\n%d", i10, i16, i8);

    return 0;
}