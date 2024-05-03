#include <stdio.h>


int main(void) {

    int n;
    int _n;
    int s = 0;

    if (scanf("%d", &n) != 1) {
        printf("Error input\n");
        return 0;
    }

    _n = n;

    while (n > 0) {
        s += n * n;
        n--;
    }

    printf("s = %d\n", s);

    n = _n;
    s = 0;

    while (n-- > 0) {
        s += n * n;
    }

    printf("s = %d\n", s);
    
    n = _n;
    s = 0;

    while (--n > 0) {
        s += n * n;
    }

    printf("s = %d\n", s);
    
    n = _n;
    s = 0;

    int i = 0;
    
    while (++i <= n) {
        s += i * i;
    }

    printf("s = %d\n", s);

    s = 0;
    i = 0;

    while (i++ <= n) {
        s += i * i;
    }

    printf("s = %d\n", s);

    return 0;
}