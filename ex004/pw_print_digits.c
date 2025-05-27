#include <unistd.h>
void pw_print_digits(void){
    char c;
    int i = 0;
    while(i<10){
        c = '0' + i;
        write(1,&c,1);
        i++;
    }
write(1,"\n",1);
};
