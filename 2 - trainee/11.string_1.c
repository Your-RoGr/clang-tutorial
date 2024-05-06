#include <stdio.h>


int main(void) {

    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char s[] = "Hello, World";
    char buffer[512] = "Hello, World";
    
    char b[] = "Hel" "lo"
                ", world";

    char sp[] = "Hello, \
World";

    printf("%s\n", str);
    printf("%s\n", s);
    printf("%s\n", buffer);
    printf("%s\n", b);
    printf("%s\n", sp);

    char string[] = "a";
    char sim = 'a';

    printf("%zu\n", sizeof(string));
    printf("%zu\n", sizeof(sim));

    char* string_2 = "Hello";
    // string_2[0] = 'A'; // Will only generate an error when the program is started 
    printf("%s\n", string_2);

    const char* string_3 = "Hello"; // That's why it's worth writing const 
    // string_2[0] = 'A'; // Error before compilation
    printf("%s\n", string_3);

    char string_4[] = "I like \"C\"";
    printf("%s\n", string_4);

    char string_5[] = "\x70, \x2f";
    printf("%s\n", string_5);

    puts(string_4);
    puts(string_4);

    char bf[10];
    // scanf("%9s", bf);
    // fgets(bf, sizeof(bf), stdin);
    // char* gets(char* bf); // Cannot be used may cause vulnerability

    int max_len = sizeof(bf), i = 0;
    char *ptr = bf, ch;

    while ((ch = getchar()) != '\n' && ch != EOF && i < max_len - 1) {
        ptr[i++] = ch;
    }

    ptr[i] = '\0';
    puts(bf);
    
    return 0;
}