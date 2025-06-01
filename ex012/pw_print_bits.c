#include <unistd.h>

void pw_print_bits(void)
{
unsigned i = 0;
char bits[8];
    while(i<=255){
        for(int b = 7; b >=0; b--)
            bits[7-b] = ((i>>b) & 1) + '0';
        write(1, bits,8);
write(1,"\n",1);
i++;
}
}
