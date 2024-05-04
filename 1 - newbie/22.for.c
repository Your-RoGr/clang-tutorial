#include <stdio.h>


int main (void) {
    
    long n, p = 1;

    if (scanf("%ld", &n) != 1) {
        printf("Error input\n");
        return 0;
    }

    for (long i = 1; i <= n; ++i) {
        p *= i;
    }

    printf("p = %ld\n", p);

    for (long i = 1, p = 1; i <= n; p *= i, ++i);

    printf("p = %ld\n", p);

    return 0;
}