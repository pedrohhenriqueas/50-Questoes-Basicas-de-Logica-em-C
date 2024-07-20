/*
Questao 19:
Escreva um algoritmo que recebe tres valores inteiros e mostre o valor do maior
numero digitado pelo usuario.
*/

#include <stdio.h>

int main()
{
    int v1, v2, v3, maior;
        printf("Primeiro valor: ");
        scanf ("%d", &v1),
        printf("Segundo valor: ");
        scanf ("%d", &v2);
        printf("Terceiro valor: ");
        scanf ("%d", &v3);
        printf("-------------------\n");
        
        if (v1 >= v2)
        {
            if (v1 >= v3)
            {
              (maior = v1);
            }
        }
        if (v2 >= v1)
            {
            if (v2 >= v3)
            {
               (maior = v2);
            }
        }
        if (v3 >= v1)
        {
            if (v3 >= v2)
            {
                (maior = v3);
            }
        }
        
        printf("O valor maior e: %d", maior);

    return 0;
}
