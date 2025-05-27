#include <unistd.h>
void pw_reverse_alphabet(void)
{
    char c = 'z';
    while (c >='a'){
        write(1,&c,1);
        c--;
    }
    write(1,"\n",1);
};
