#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    int x;

    if (scanf("%d", &x) != 1) {
        printf("Error input");
        return 0;
    }

    if (x < 0) x = -x;
    printf("x = %d\n", x);

    if (x >= 3 && x <= 11) {
        printf("x in [3; 11]\n");
    }

    if (x) {
        printf("x != 0\n");
    }

    if (x >= 0) {
        printf("x >= 0\n");
    } else {
        printf("x < 0\n");
    }

    if (x > 0) {
        printf("x > 0\n");
    } else if (x < 0) {
        printf("x < 0\n");
    } else {
        printf("x == 0\n");
    }
    
    return 0;
}