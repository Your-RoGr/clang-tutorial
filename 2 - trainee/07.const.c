#define CODE 13


int main (void) {

    const int code = 13;
    
    char str_1[code]; // Don't write like that
    char str_2[CODE];

    // code = 15; // Don't work

    short ar[] = {4, 3, 2, 1, 5, 6, 7};
    const short *ptr_ar;

    ptr_ar = ar;
    short x = ptr_ar[2];
    // ptr_ar[0] = 10; // Don't work
    ptr_ar++;

    short *const _ptr_ar = ar;

    // _ptr_ar = ar; // Don't work
    x = _ptr_ar[2];
    // ptr_ar[0] = 10; // Don't work
    // _ptr_ar++; // Don't work

    return 0;
}