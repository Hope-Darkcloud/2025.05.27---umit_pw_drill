int pw_extract_digits(char *str){

if (str == 0 || str[0] == '\0')
return 0;

int result = 0;
int i = 0;
while (*str != '\0')
{if (str[i] >= '0' && str[i] <= '9')
{if (result > 214748364)
{return result; }

result = result * 10 + (*str - '0');
}
str++; 
}
return result;

}
