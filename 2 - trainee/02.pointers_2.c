#include <stdio.h>


int main (void) {
    
    int arg = 777;
    int *ptr_arg;
    char *ptr;

    ptr_arg = &arg;
    ptr = (char *)ptr_arg;

    printf("*ptr = %d, arg = %d\n", *ptr, arg);

    *ptr = 1;
    printf("*ptr = %d, arg = %d\n", *ptr, arg);

    void* p; // For address storage 

    return 0;
}