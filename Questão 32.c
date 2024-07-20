/*
Questao 32:
Construa um algoritmo que leia um conjunto de 20 n umeros inteiros e mostre qual foi o maior valor fornecido
*/

#include <stdio.h>

int main()
{
    int c = 1, i, maior;
    while (c <= 20)
    {
        printf("Digite o %d numero: ", c);
        scanf ("%d", &i);
        c = c + 1;
        if(i >= maior)
        {
            maior = i;
        }
    }
    printf("---------------------------------\n");
    printf("MAIOR NUMERO: %d", maior);
    

return 0;
}
