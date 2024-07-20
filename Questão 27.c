/*
Questao 27:
Fazer um algoritmo que calcule e mostre o quadrado dos nnmeros inteiros compreendidos entre 15 e 30.
*/

#include <stdio.h>

int main()
{
    int c = 15, quadrado;
    quadrado = c * c;
    
    while(c <= 30)
    {
      printf("O quadrado de %d e: %d\n", c, quadrado);
      c = c + 1;
      quadrado = c * c;
    }
    return 0;
}