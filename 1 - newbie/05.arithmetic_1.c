#include <stdio.h>


int main(void) {
    
    short a = -5;
    int b = -a;

    double res_d = (double)a / (double)b;

    printf("/: %lf\n", res_d);

    res_d = (double)a * (double)b;

    printf("*: %lf\n", res_d);

    res_d = (double)(a + 3) + (double)b;

    printf("+: %lf\n", res_d);

    res_d = (double)a - (double)b;

    printf("-: %lf\n", res_d);

    int res_i = (a + 1) % b;

    printf("%%: %d\n", res_i);

    res_i = ++a;

    printf("++a: %d\n", res_i);

    res_i = a++;

    printf("a++: %d\n", res_i);

    res_i = a++;

    printf("a++: %d\n", res_i);

    res_i += a;

    printf("+=: %d\n", res_i);

    res_i -= a;

    printf("-=: %d\n", res_i);

    res_i *= a;

    printf("*=: %d\n", res_i);

    res_i /= a;

    printf("/=: %d\n", res_i);

    return 0;
}