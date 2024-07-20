/*
Questao 36:
Calcular o valor de S dado pela sequencia:
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/10 
*/

#include <stdio.h>

int main()
{
    float s=1, soma;
    int c=1;
    
    for(c=2;c<=10;c++)
    {
        soma=(1.0/c);
        s = soma + s;
    }
    printf("O valor de S e: %.2f", s);
    return 0;
}
