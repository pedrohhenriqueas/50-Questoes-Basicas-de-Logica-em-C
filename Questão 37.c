/*
Questao 37:
Calcular o valor de S dado pela sequencia:

S = 1 + 3/2 + 5/3 + 7/4 + ... + 90/50
*/

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
    printf("O valor de S e: %.2f", s);
    
    return 0;
}