#include <stdio.h>


int main (void) {
    
    double x, s = 0.0;

    while (scanf("%lf", &x) == 1) {

        if (x < 0) {
            break;
        }

        s += x;
    }

    printf("s = %2.f\n", s);

    s = 0.0;

    while (scanf("%lf", &x) == 1 && x >= 0) {
        s += x;
    }

    printf("s = %2.f\n", s);

    int i;
    s = 0.0;

    while (scanf("%d", &i) == 1 && i != 0) {

        if (i % 2 == 0) {
            continue;
        }

        s += i;
    }

    printf("s = %2.f\n", s);

    int sum = 0;

    for (int i = 1; i <= 10; ++i)
        for (int j = 7; j >= 5; --j) {
            if (i-j > 0) {
                goto exit_sum;
            }
            
            sum += i-j;
    }

    exit_sum: printf("sum = %d\n", sum);

    return 0;
}