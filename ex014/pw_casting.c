int pw_casting(float f){
int i = (int)f;
int c = (unsigned char)f;
int r = (f - i >=0.5) ? i + 1: i;
return i + c + r;
}
