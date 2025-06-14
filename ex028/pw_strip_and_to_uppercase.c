void pw_strip_and_to_uppercase(char *str){

if (str == 0)
return;

    int read = 0;
    int write = 0;
    
while (str [read] != '\0'){
char c = str[read];
    if (c >= 'a' && c <= 'z') {
        str[write] = c - ('a' - 'A');
        write++;
    }else if (c >= 'A' && c <= 'Z') {
        str[write] = c;
        write++;
    }
    read++;

}
    str[write] = '\0';

}
