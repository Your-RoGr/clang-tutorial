#include <stdio.h>
#include <stdbool.h>

int main(void) {

    _Bool _fl = 10;

    printf("_Bool: %d\n", _fl);

    bool fl = true;

    printf("bool: %d\n", fl);
    
    double x = 5.67;
    bool fl_view = x < 0;

    printf("x < 0: %d\n", fl_view);

    fl_view = x < 10;

    printf("x < 10: %d\n", fl_view);

    fl_view = 5 > 7;

    printf("5 > 7: %d\n", fl_view);

    fl_view = x + 2 >= 10.56;

    printf("x + 2 >= 10.56: %d\n", fl_view);

    fl_view = x == 5.67;

    printf("x == 5.67: %d\n", fl_view);

    fl_view = x != 5.67;

    printf("x != 5.67: %d\n", fl_view);

    fl_view = 3 % 2 == 0;

    printf("3 %% 2 == 0: %d\n", fl_view);

    fl_view = 4 % 2 == 0;

    printf("4 %% 2 == 0: %d\n", fl_view);

    fl_view = 4 % 2 == 0 && 3 % 2 == 0;

    printf("4 %% 2 == 0 && 3 %% 2 == 0: %d\n", fl_view);

    fl_view = 4 % 2 == 0 || 3 % 2 == 0;

    printf("4 %% 2 == 0 || 3 %% 2 == 0: %d\n", fl_view);
    return 0;
}