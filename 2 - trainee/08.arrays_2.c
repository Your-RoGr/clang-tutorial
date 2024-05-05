#include <stdio.h>

#define TOTAL_MARKS 10


int main (void) {
    
    float func_1[100] = {2.4, -3.8, 0, 10.2, 11.78, -5.43};
    int func_2[50];

    int size_1 = sizeof(func_1) / sizeof(func_1[0]);
    int size_2 = sizeof(func_2) / sizeof(func_2[0]);
    int size = (size_1 < size_2) ? size_1 : size_2;

    for (int i = 0; i < size; ++i) {
        func_2[i] = (int)func_1[i];
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", func_2[i]);
    }
    printf("\n");

    int marks[TOTAL_MARKS] = {3, 2, 5, 2, 4};
    int insert_indx = 2;
    int val = 4;

    for (int i = TOTAL_MARKS - 1; i > insert_indx; --i) {
        marks[i] = marks[i - 1];
        printf("marks[%d] = marks[%d]\n", i, i-1);
    }

    marks[insert_indx] = val;

    for (int i = 0; i < TOTAL_MARKS; ++i) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    int del_indx = 3;

    for (int i = del_indx; i < TOTAL_MARKS - 1; ++i) {
        marks[i] = marks[i + 1];
        printf("marks[%d] = marks[%d]\n", i, i+1);
    }

    for (int i = 0; i < TOTAL_MARKS; ++i) {
        printf("%d ", marks[i]);
    }

    return 0;
}