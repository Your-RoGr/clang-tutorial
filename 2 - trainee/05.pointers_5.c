#include <stdio.h>


int main (void) {
    
    int g = 476789;
    char* ptr = (char *)&g;

    for (int i = 0; i < sizeof(int); ++i) {
        printf("%d ", *ptr++);
    }

    return 0;
}