/*
Questao 29:
Fazer um algoritmo que leia 5 numeros e verifique se ele esta entre 100 e 200.
Se estiver na faixa, mostrar ”Voce digitou um numero entre 100 e 200”, se nao estiver na faixa,
mostrar ”Voce digitou um numero fora da faixa entre 100 e 200”
*/

#include <stdio.h>

int main()
{
    int c=1, n;
        while (c <= 5)
        {
            printf("Escreva o %d numero: ", c);
            scanf ("%d", &n);
            c = c + 1;
            if(n <= 200 && n >= 100)
            {
               printf("Você digitou um nuumero entre 100 e 200\n") ;
            }
            else
            {
                printf("Você digitou um numero fora da faixa entre 100 e 200\n");
            }
            printf("-----------------------------------------------------\n");
        }
return 0;
}