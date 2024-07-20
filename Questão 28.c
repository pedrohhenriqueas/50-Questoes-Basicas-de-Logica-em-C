/*
Questao 28:
Fazer um algoritmo que calcule e mostre a soma dos cem primeiros numeros inteiros
*/

#include <stdio.h>

int main()
{
    int c = 1, soma=1;
    while(c <= 100)
    {
      printf ("Soma Numero %d = %d\n", c, soma);
      c = c + 1;
      soma = soma + c;
    }
return 0;
}