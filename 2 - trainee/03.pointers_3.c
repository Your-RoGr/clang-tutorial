#include <stdio.h>


int main (void) {
    
    int arg = 5;
    int *ptr = NULL;

    if (ptr != NULL) {
        *ptr = 1;
    } else {
        ptr = &arg;
        *ptr = 1;
    }

    return 0;
}