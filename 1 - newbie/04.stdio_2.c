#include <stdio.h>


int main(void) {
    
    unsigned int price = 0;
    double weight = 0.0;
    
    // 10; 1000; 54.65
    int res = scanf("%*llu; %u; %lf", &price, &weight);
    printf("res = %d: price = %d, weight = %.2f\n", res, price, weight);

    return 0;
}