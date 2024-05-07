#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

    double width = 2.4, height = 0.76, depth = 3.14;
    char name[] = "Chair";
    const size_t size = strlen(name) + 100;
    char* info = malloc(size);

    const char format[] = "(%s: %.2f x %.2f x %.2f)";

    sprintf(info, format, name, width, height, depth);
    puts(info);
    
    free(info);

    int var_i = -123;
    char str_var[10];

    sprintf(str_var, "%d", var_i);

    puts(str_var);

    int a = atoi("123");
    long b = atol("234235354");
    long long c = atoll("23423423423443");
    double d = atof("31123.3113");

    printf("a = %d\nb = %ld\nc = %lld\nd = %f\n", a, b, c, d);

    a = atoi("1a23");
    b = atol("-31313131313131331234235354");
    c = atoll("23423d423423443");
    d = atof("f31123.3113");

    printf("a = %d\nb = %ld\nc = %lld\nd = %f\n", a, b, c, d);

    return 0;
}