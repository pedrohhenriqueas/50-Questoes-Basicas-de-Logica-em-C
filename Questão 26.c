#include <stdio.h>

int main()
{
    int c = 1, multiplicador = 7, resultado;
    resultado = c * multiplicador;
    
    while(c <= 10)
    {
    printf("Tabuada: %d x %d = %d\n", c, multiplicador, resultado);
    c = c + 1;
    resultado = c * multiplicador;
    }
    return 0;
}