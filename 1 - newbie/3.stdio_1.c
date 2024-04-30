#include <stdio.h>

int main(void) {
    
    int value = getchar();
    int res = putchar(value);
    putchar('\n');
    printf("%c - %d", res, res);
    
    return 0;
}