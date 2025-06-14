
void pw_replace_chars(char *str) {
    if (str == 0 || str[0] == '\0')
        return;

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = '?';
        } else if (str[i] == 'e') {
            str[i] = '*';
        }
        i++;
    }
}
