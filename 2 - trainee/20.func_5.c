#include <stdio.h>
#include <stdarg.h>


int sum(int count, ...) {

    int s = 0;
    va_list arg;
    va_start(arg, count);

    for (int i = 0; i < count; ++i) {
        s += va_arg(arg, int);
    }

    va_end(arg);

    return s;
}

int main(void) {

    int res = sum(5, 1, 2, 3, 4, 5);
    printf("res - %d\n", res);

    res = sum(3, 1, 2, 3, 4, 5);
    printf("res - %d\n", res);

    return 0;
}