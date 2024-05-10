#include <stdio.h>


void swap(int* a, int* b) {
    
    int t = *a;
    *a = *b;
    *b = t;
}

// int sum_ar(const short* arr, int length)
int sum_ar(const short arr[], int length) {
    
    int res = 0;
    for (int i = 0; i < length; ++i) {
        res += arr[i];
    }

    return res;
}

const char* find_space(const char* buf) {
    while (*buf != '\0') {
        if (*buf == ' ') {
            return buf;
        }
        buf++;
    }

    return NULL;
}

void show_ar2D(const short (*ar)[3], int rows) {

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", ar[i][j]);
        }
        putchar('\n');
    }
}

int main(void) {

    int x = 5, y = 10;
    printf("x - %d, y - %d\n", x, y);

    swap(&x, &y);
    printf("x - %d, y - %d\n", x, y);

    short ar[] = {1, 2, 3, 4, 5};

    int res = sum_ar(ar, sizeof(ar) / sizeof(*ar));

    printf("res - %d\n", res);

    char str[] = "Hello World!";
    const char* b = find_space(str);

    printf("b = %p\n", b);
    
    short ar2D[][3] = {{1, 2, 3}, {4, 5, 6}};

    show_ar2D(ar2D, sizeof(ar2D) / sizeof(*ar2D));

    return 0;
}