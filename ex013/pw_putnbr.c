#include<unistd.h>
void pw_putnbr(unsigned int nb){
char digit[10];
int i = 0;

if (nb == 0){
char c = '0';
write(1,&c,1);
    return;
}
while(nb>0){
digit[i] = (nb%10) + '0';
    nb = nb/10;
    i++;
}
while(--i>=0)
write(1,&digit[i],1);

}
/*


if(nb>=10)
pw_putnbr(nb / 10);
char c = (nb%10)+'0';
write(1,&c,1); 

*/
