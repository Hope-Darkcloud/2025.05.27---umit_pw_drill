#include <unistd.h>
void pw_print_memory(void *addr, size_t size){
if (addr == 0 || size == 0)
return;

unsigned char *ptr = (unsigned char *)addr;

for (size_t i = 0; i < size; i++){
char c = ptr[i];
if (c >= 32 && c <= 126){
write(1, &c, 1);
}else {
char dot = '.';
write(1, &dot, 1);
}
}




}
