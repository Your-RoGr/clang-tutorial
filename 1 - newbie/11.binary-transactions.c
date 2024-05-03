#include <stdio.h>


int main(void) {

    unsigned char var = 153; // 10011001
    unsigned char not_v = ~var; // 01100110
    // 255 - 153 = 102
    printf("var = %d, not_v = %d\n", var, not_v);

    unsigned char flags = 5; // 00000101
    unsigned char mask = 4; // 00000100

    /* 
    00000101
    &&
    00000100
    --------
    00000100
    */

    unsigned char res = flags & mask; // 00000100

    printf("&& res = %d\n", res);
    if ((flags & mask) == mask) {
        printf("bit 2 is on");
    } else {
        printf("bit 2 is off");
    }

    flags = 13; // 00001101
    mask = 5; // 00000101

    /* 
    00001101
    &&
    11111010
    --------
    00001000
    */

    flags = flags & ~mask; // 00001000

    printf("&& flags = %d\n", flags); // 13 - 5 = 8

    flags = 8; // 00001000
    mask = 5; // 00000101

    /* 
    00001000
    ||
    00000101
    --------
    00001101
    */

    flags = flags | mask; // 00001101

    printf("|| flags = %d\n", flags); // 8 + 5 = 13

    flags = 9; // 00001001
    mask = 5; // 00000101

    /* 
    00001001
    ||
    00000101
    --------
    00001101
    */

    flags = flags | mask; // 00001101

    printf("|| flags = %d\n", flags); // 9 + 5 != 13

    flags = 9; // 00001001
    mask = 1; // 00000001

    /* 
    00001001
    XOR
    00000001
    --------
    00001000
    */

    flags = flags ^ mask; // 00001000

    printf("XOR flags = %d\n", flags); // 8

    /* 
    00001000
    XOR
    00000001
    --------
    00001001
    */

    flags = flags ^ mask; // 00001001

    printf("XOR flags = %d\n", flags); // 9

    return 0;
}