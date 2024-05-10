#include <stdio.h>


int main(void) {

    int p = 1, n = 10;

    for (register int i = 2; i <= n; ++i) {
        p  *= i;
    }

    printf("p = %d\n", p);

    return 0;
}