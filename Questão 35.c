/*
Questao 35:
Construa um algoritmo que calcule e mostre o valor de H, sendo H calculado por:

H = 1 + 2 + 3 + 4 + ... + N
*/

#include <stdio.h>

int main()
{
    int h, n, c = 1, soma;
    printf("Digite o valor de N: ");
    scanf ("%d", &n);
    while(c < n)
    {
        soma = soma + c;
        h = n + soma;
        c = c + 1;
    }
    printf("-------------------------\n");
    printf("Valor de H: %d", h);
    return 0;
}
