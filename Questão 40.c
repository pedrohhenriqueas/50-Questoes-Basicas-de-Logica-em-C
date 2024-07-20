/*
Questao 40:
Escreva um algoritmo que leia os valores de K e N . Calcule e mostre o valor de
K^N 
*/

#include <stdio.h>

int main()
{
    int k, n,c=1, produto=1;
    printf("Escreva o valor de K: ");
    scanf ("%d", &k);
    printf("Escreva a potencia N para elevar K: ");
    scanf ("%d", &n);
    while (c<=n)
    {
        produto = k * produto;
        c = c + 1;
    }
    printf("----------------------------------\n");
    printf("Resultado da potenciacao de K elevado a N e: %d", produto);
    return 0;
}