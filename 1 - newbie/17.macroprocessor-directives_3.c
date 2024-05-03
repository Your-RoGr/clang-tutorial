#include <stdio.h>

#define SQ_PR(A, B) ((A) * (B))
#define TEXT(A, B)  "Square of rectangle (" #A ") * (" #B ")\n"
#define X_N(N)      x ## N


int main(void) {

    int res = SQ_PR(2, 3);

    printf("red = %d\n", res);
    printf(TEXT(x-2, y-3));
    
    int x1 = 1, x2 = -2, x4 = 10;
    
    printf("%d\n", X_N(1));
    printf("%d\n", X_N(2));
    printf("%d\n", X_N(4));

    return 0;
}