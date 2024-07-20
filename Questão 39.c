/*
Questao 39:
Escreva um algoritmo que calcule e mostre os 10 primeiros termos da serie de Fibonacci:

1 1 2 3 5 8 13 21 34 55 89 144 233 377...
*/

#include <stdio.h>

int main()
{
    int atual, antecessor, sucessor;
    atual = 1;
    for (int c=1;c<=10;c++)
    {
        printf ("%d° numero da Fibonacci: %d\n", c, atual);
        sucessor = atual + antecessor;
        antecessor = atual;
        atual = sucessor;
    }
    return 0;
}