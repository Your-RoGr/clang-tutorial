#include <stdio.h>

// #define SIZE_BUFFER 1024
#define TOTAL_MARKS 13


int month[] = {31, 28, 31, 30, 31};

int main (void) {
/*
    double f[30];
    char buffer[SIZE_BUFFER];
    int marks[13];
    short ar[8 * 5];
    char bytes[sizeof(double)];

    int n = 5;
    int array[n]; // Does not work on some standards
*/

    // int marks[TOTAL_MARKS]; // = {[0-9]} fills 0 if there is an incilizer
    int marks[TOTAL_MARKS] = {1, 2, 3};

    marks[2] = 4;
    marks[0] = 2 * 3;
    marks[12] = 7 - 2;
    
    for (int i = 0; i < TOTAL_MARKS; ++i) {
        printf("%d ", marks[i]);
    }

    int x = marks[2];
    printf("\n%d\n", x);

    x = marks[2] = 2;
    printf("%d\n", x);

    size_t bytes_marks = sizeof(marks);

    printf("%zu\n", bytes_marks);
    printf("%zu\n", bytes_marks / sizeof(*marks));
    printf("%zu\n", bytes_marks / sizeof(marks[0]));
    printf("%zu\n", bytes_marks / sizeof(int));

    int corrds[] = {10, -2, 30};

    for (int i = 0; i < sizeof(corrds) / sizeof(*corrds); ++i) {
        printf("%d ", corrds[i]);
    }
    printf("\n");

    short digits[10] = {10, [2]=-2, 18, [9]=30};

    for (int i = 0; i < sizeof(digits) / sizeof(*digits); ++i) {
        printf("%d ", *(digits+i));
    }
    printf("\n");

    short *ptr_ar = digits;

    printf("*ptr_ar - %d\n", *ptr_ar);
    printf("sizeof(digits) - %zu\n", sizeof(digits));
    printf("sizeof(*digits) - %zu\n", sizeof(*digits));
    printf("sizeof(ptr_ar) - %zu\n", sizeof(ptr_ar));

    short y = ptr_ar[2];

    printf("y - %d\n", y);

    y = 9[ptr_ar]; // Don't write like that

    printf("y - %d\n", y);

    return 0;
}