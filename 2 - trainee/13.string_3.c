#include <stdio.h>
#include <string.h>


int main(void) {

    char s1[12] = "Hello";
    char s2[10] = "Hello";

    const char *str1 = s1;
    const char *str2 = s2;

    int i = 0;
    for (; str1[i] != '\0' && str2[i] != '\0'; ++i) {
        if (str1[i] != str2[i]) {
            puts("Strings are not equal!");
        }
    }

    if (str1[i] != str2[i]) {
        puts("String lengths are not equal!");
    } else {
        puts("Strings are equal!");
    }

    int res = strcmp(s1, s2);

    if (res == 0) {
        puts("Strings are equal!");
    } else {
        puts("Strings are not equal!");
    }

    const char* strings[] = {
        "Ship",
        "Shopping",
        "Shematic",
        "Super",
        "Car",
        "Sherif"
    };

    for (int i = 0; i < sizeof(strings) / sizeof(*strings); ++i) {
        if (strncmp(strings[i], "Sh", 2) == 0) {
            puts(strings[i]);
        }
    }

    char str[] = "Abrakadabra";
    char *ptr = strchr(str, 'a');

    printf("str = %p\nptr = %p\n", str, ptr);

    if (ptr != NULL) {
        printf("*ptr = %c\n", *ptr);
    }
    
    ptr = strrchr(str, 'a');

    printf("str = %p\nptr = %p\n", str, ptr);

    if (ptr != NULL) {
        printf("*ptr = %c\n", *ptr);
    }

    ptr = strrchr(str, 'S');

    printf("str = %p\nptr = %p\n", str, ptr);

    if (ptr != NULL) {
        printf("*ptr = %c\n", *ptr);
    }

    ptr = strstr(str, "ra");

    printf("str = %p\nptr = %p\n", str, ptr);

    if (ptr != NULL) {
        printf("ptr = %s\n", ptr);
    }

    ptr = strstr(str, "ra");

    printf("str = %p\nptr = %p\n", str, ptr);

    if (ptr != NULL) {
        printf("ptr = %s\n", ptr);
    }

    char pass[] = "dfdfsafaf90!#$A";
    ptr = strpbrk(pass, "@!#$^&?");

    printf("str = %p\nptr = %p\n", pass, ptr);

    if (ptr != NULL) {
        printf("ptr = %s\n", ptr);
    }

    return 0;
}