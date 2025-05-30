#include <unistd.h>
void pw_count_to_n(unsigned int n){
    unsigned int i = 0;
    char c;
    while(i <= n){
        c = i + '0';
        write(1,&c,1);
        write(1,"\n",1);
        i++;
    }
    
};
