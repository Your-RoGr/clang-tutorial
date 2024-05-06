#include <stdio.h>


int main (void) {

    char game_pole_1[3][3] = {1, 2, 3, 4};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", game_pole_1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    char game_pole_2[3][3] = {{1, 2}, {3, 4}};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", game_pole_2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    char game_pole_3[5][3];

    size_t bytes = sizeof(game_pole_3);
    size_t row_bytes = sizeof(game_pole_3[0]);
    size_t rows = sizeof(game_pole_3) / sizeof(game_pole_3[0]);
    size_t cols = sizeof(game_pole_3[0]) / sizeof(game_pole_3[0][0]);

    printf("bytes - %zu\n", bytes);
    printf("row_bytes - %zu\n", row_bytes);
    printf("rows - %zu\n", rows);
    printf("cols - %zu\n", cols);
    printf("game_pole_2[0][0] - %d\n", game_pole_2[0][0]);

    char *p_row = game_pole_2[1];
    char (*p_ar)[3] = game_pole_2;
    char x = p_ar[1][1];

    printf("x - %d\n", x);

    return 0;
}