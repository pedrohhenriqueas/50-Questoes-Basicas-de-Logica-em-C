/*
Questao 30:
Escreva um algoritmo que leia a idade de 10 pessoas, calcule e mostre a quantidade de pessoas maiores de idade
*/

#include <stdio.h>

int main()
{
    int c=1, idade, maiores;
    while (c <= 10)
    {
        printf("Escreva a idade da %d° pessoa: ", c);
        scanf ("%d", &idade);
        c = c + 1;
        if (idade >= 18)
        {
            maiores = maiores + 1;
        }
    }
    printf("-------------------------------------\n");
    printf("Quantidade dos maiores de idade: %d", maiores);
    
return 0;
}