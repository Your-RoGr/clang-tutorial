#include <stdio.h>
#include "per_sq.h"

// mkdir -p build && gcc 16.func_2.c per_sq.c -o build/16.func_2 && ./build/16.func_2     


int main(void) {

    printf("per = %.2f\n", per_sq(2.5, 3.5));
    
    return 0;
}