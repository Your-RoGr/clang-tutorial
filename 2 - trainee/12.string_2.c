#include <stdio.h>
#include <string.h>


int main(void) {

    char source[100] = "Source string";
    char destination[10];

    const char *src = source;
    char *dst = destination;
    int max_len_copy = sizeof(destination);

    while (*src != '\0' && max_len_copy-- > 1) {
        *dst++ = *src++;
    }
    
    *dst = '\0';

    puts(destination);

    char source_1[100] = "Source string";
    char destination_1[20];

    strcpy(destination_1, source_1);
    puts(destination_1);

    char source_2[100] = "Source string";
    char destination_2[10];

    int max_len = sizeof(destination_2) - 1;
    strncpy(destination_2, source_2, max_len);
    destination_2[max_len] = '\0';

    puts(destination_2);

    size_t length = strlen(source);
    printf("%zu\n", length);

    strcat(source, source_1);
    puts(source);

    size_t max_add = sizeof(source_1) - strlen(source_1) - 1;
    strncat(source_1, source_2, max_add);
    source_1[sizeof(source_1) - 1] = '\0';
    puts(source_1);
    
    return 0;
}