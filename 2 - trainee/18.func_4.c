#include <stdio.h>

#define SIZE 10


int sq_rect(int width, int height) {
    return width * height;
}

int per_rec(int width, int height) {
    return 2 * (width + height);
}

void filter(int dst[], size_t size_dst, const int src[], size_t size_src, 
            int (*is_correct)(int)) {
    for (int i = 0; i < size_dst; ++i) {
        dst[i] = 0;
    }

    for (int i = 0, j = 0; i < size_src; ++i) {
        if (is_correct(src[i])) {
            dst[j++] = src[i];
        }
    }
}

int is_even(int x) {
    return x % 2 == 0;
}

int is_odd(int x) {
    return x % 2 == 1;
}

int is_positive(int x) {
    return x > 0;
}

int main(void) {
    
    int (*ptr_func) (int, int);

    ptr_func = sq_rect;

    printf("sq_rect = %p\n", sq_rect);
    printf("ptr_func = %p\n", ptr_func);

    int res = ptr_func(2, 3);

    printf("res - %d\n", res);

    ptr_func = per_rec;

    printf("per_rec = %p\n", per_rec);
    printf("ptr_func = %p\n", ptr_func);

    res = ptr_func(2, 3);

    printf("res - %d\n", res);

    int digits[] = {-3, 4, 10, 11, -5, 3};
    int result[SIZE];

    filter(result, SIZE, digits, sizeof(digits) / sizeof(*digits), is_even);

    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", result[i]);
    }
    putchar('\n');

    filter(result, SIZE, digits, sizeof(digits) / sizeof(*digits), is_odd);

    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", result[i]);
    }
    putchar('\n');

    filter(result, SIZE, digits, sizeof(digits) / sizeof(*digits), is_positive);

    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", result[i]);
    }
    putchar('\n');

    int (*criterials[]) (int) = {is_even, is_odd, is_positive};

    filter(result, SIZE, digits, sizeof(digits) / sizeof(*digits), criterials[2]);

    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", result[i]);
    }
    putchar('\n');

    return 0;
}