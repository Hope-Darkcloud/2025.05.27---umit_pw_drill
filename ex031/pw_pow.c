int pw_pow(int base, int exposant){
if (exposant == 0)
return 1;
if (exposant < 0)
return 0;
if (base == 0 && exposant > 0)
return 0;

int result = 1;
    for (int i = 0; i < exposant; i ++)
{result *= base;

} 
return result;

}
