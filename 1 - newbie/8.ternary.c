#include <stdio.h>

int main(void) {
    
    double a = 7.5, b = -3.43;
    
    double max_ab = a > b ? a : b;

    printf("max_ab = %.2f\n", max_ab);

    if (a > b)
        max_ab = a;
    else
        max_ab = b;

    printf("max_ab = %.2f\n", max_ab);

    int x = 7;
    printf("x is %s digit\n", (x % 2 == 0) ? "even" : "odd");

    x = 8;
    printf("x is %s digit\n", (x % 2 == 0) ? "even" : "odd");

    int _a = 2, _b = 3, _c = -4;

    int max = (_a > _b) ? (_a > _c ? _a : _c) : (_b > _c) ? _b : _c;

    printf("max = %d\n", max);
    
    return 0;
}