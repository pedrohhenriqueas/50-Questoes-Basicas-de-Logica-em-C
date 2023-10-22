#include <stdio.h>

int main()
{
    
    float s, soma;
    int dividendo=3, divisor=2;
    
    for(dividendo=3, divisor=2; dividendo<=99 && divisor<=50; dividendo+=2, divisor++)
    {
        soma=(float)dividendo/divisor;
        s = soma + s;
    }
    printf("O valor de S é: %.2f", s);
    
    return 0;
}