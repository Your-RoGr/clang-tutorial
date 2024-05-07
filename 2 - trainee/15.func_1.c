#include <stdio.h>
#include <math.h>


void print_hi(void) {
    puts("Hi!");
}

int get_per(int width, int height) {
    
    int p = 2 * (width + height);
    return p;
}

double sq4_x(double x) {
    double res = (x < 0) ? NAN : pow(x, 0.25);
    return res;
}

void print_even_x(int x) {
    if (x % 2 != 0) {
        return;
    }

    printf("x = %d\n", x);
}

double min_2(double a, double b) {
    return (a < b) ? a : b;
}

double min_3(double a, double b, double c) {
    double min_ab = min_2(a, b);
    return (min_ab < b) ? min_ab : b;
}

int main(void) {

    print_hi();
    print_hi();
    print_hi();
    
    int w = 2, h = 5;

    printf("%d\n", get_per(w + 2, h + 2));

    printf("%.2f\n", sq4_x(16));
    printf("%.2f\n", sq4_x(-16));

    print_even_x(3);
    print_even_x(4);

    int x = 1, y = -2, z = 10;

    double res_1 = min_2(x, y);
    printf("%f\n", res_1);

    double res_2 = min_3(x, y, z);
    printf("%f\n", res_2);

    double res_3 = min_2(min_2(x, y), z);
    printf("%f\n", res_3);
    
    return 0;
}