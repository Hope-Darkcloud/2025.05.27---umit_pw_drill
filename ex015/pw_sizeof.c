#include <unistd.h>

void print_str(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    write(1, str, len);
}

void print_num(int n) {
    char c;
    if (n >= 10)
        print_num(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void pw_sizeof(void) {
    print_str("char: ");
    print_num(sizeof(char));
    print_str(" octets\n");

    print_str("short: ");
    print_num(sizeof(short));
    print_str(" octets\n");

    print_str("int: ");
    print_num(sizeof(int));
    print_str(" octets\n");

    print_str("long: ");
    print_num(sizeof(long));
    print_str(" octets\n");

    print_str("float: ");
    print_num(sizeof(float));
    print_str(" octets\n");

    print_str("double: ");
    print_num(sizeof(double));
    print_str(" octets\n");
}
