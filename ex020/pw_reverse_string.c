#include <stdio.h>
#include <stdlib.h>

void pw_reverse_string(char *str) {
    if (str == NULL || str[0] == '\0')
        return;

    int start = 0;
    int end = 0;

    while (str[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
}
