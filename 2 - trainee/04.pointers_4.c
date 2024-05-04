#include <stdio.h>


int main (void) {
    
    short g = 4, d = 1;
    short *ptr = &g;
    short *p = &d;

    printf("ptr = %u\n", ptr);

    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;

    int res = p - ptr;

    printf("res = %d\n", res);

    return 0;
}