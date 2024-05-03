#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    
    int r_1 = rand();
    int r_2 = rand();

    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

    srand(time(NULL));

    r_1 = rand();
    r_2 = rand();

    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

    int range = 10;

    r_1 = rand() % range; // [0; range]
    r_2 = rand() % range - 100; // [-100; range - 100]

    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

    double range_float = (double)rand() / (double)RAND_MAX; // [0; 1]

    printf("%f", range_float);

    return 0;
}