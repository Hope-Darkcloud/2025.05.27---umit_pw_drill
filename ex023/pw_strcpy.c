char *pw_strcpy(char *dest, char *src){
if (dest == 0)
return 0;

if (src == 0)
return dest;

int i = 0;
while (src[i] != '\0'){
dest[i] = src[i];
i++;
}
return dest;

}
