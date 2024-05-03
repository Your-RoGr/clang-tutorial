#include <stdio.h>


int main(void) {

    int x = 0, s = 0;

    while (scanf("%d", &x) == 1 && x != 0) {
        s += x;
    }

    printf("s = %d\n", s);

    return 0;
}