#include <unistd.h>

void pw_count_reverse(unsigned int n)
{
    char c;

    while (1)
    {
        c = n + '0';
        write(1, &c, 1);
        write(1, "\n", 1);

        if (n == 0)
            break;

        n--;
    }
}
