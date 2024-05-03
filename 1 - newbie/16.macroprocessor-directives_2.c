#include <stdio.h>

#define FIVE    5
#define TEN     2 * FIVE
#undef  TEN
#define TEN     10
#define TEXT    "TEXT MESSAGE IN ONE LINE"
#define TEXT2   "TEXT MESSAGE IN \
TWO LINE"
#define PRINT_D printf("digit = %d\n", digit)
#define FORMAT  "digit = %d\n"


int main(void) {

    int digit = FIVE;

    PRINT_D;

    digit = TEN;

    printf(FORMAT, digit);
    printf(TEXT"\n");
    printf(TEXT2"\n");

    return 0;
}