#include <stdio.h>

#define MENU_TRANSL 1
#define MENU_ADD 2
#define MENU_EXIT 3
#define MENU_FMT "You have selected menu item %d\n"


int main(void) {

    int item;

    scanf("%d", &item);

    switch (item) {
        case MENU_TRANSL:
            printf(MENU_FMT, MENU_TRANSL);
            printf("Translate words");
            break;
        case MENU_ADD:
            printf(MENU_FMT, MENU_ADD);
            printf("Add words");
            break;
        case MENU_EXIT:
            printf(MENU_FMT, MENU_EXIT);
            printf("Exit\n");
            break;
        default:
            printf(MENU_FMT, item);
            printf("Incorrect menu item\n");
    
    }

    return 0;
}