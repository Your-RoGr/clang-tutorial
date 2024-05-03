#include <stdio.h>


int main(void) {

    unsigned char x = 40; // 00101000
    printf("x = %d\n", x);

    x = x >> 1; // 00010100
    printf("x = %d\n", x); // 20

    x = x >> 2; // 00000101
    printf("x = %d\n", x); // 5

    x = x >> 1; // 00000010
    printf("x = %d\n", x); // 2

    x = x >> 1; // 00000001
    printf("x = %d\n", x); // 1

    x = x << 1; // 00000010
    printf("x = %d\n", x); // 2

    x = x << 2; // 00001000
    printf("x = %d\n", x); // 8

    signed char s = -128; // 10000000
    printf("s = %d\n", s);

    s = s << 1; // 00000000
    printf("s = %d\n", s); // 0

    s = -128; // 10000000
    s = s >> 1; // 11000000
    printf("s = %d\n", s); // -64

    return 0;
}