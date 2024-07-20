/*
Questao 17:
Faca um algoritmo que leia dois numeros e identifique se sao iguais ou diferentes.
Caso eles sejam iguais, mostre uma mensagem dizendo que eles sao iguais. Caso sejam diferentes,
informe qual numero e o maior, e uma mensagem que sao diferentes.
*/

#include <stdio.h>

int main()
{
    int valor_1, valor_2, maior;
        printf("Digite o primeiro valor: ");
        scanf ("%d", &valor_1);
        printf("Digite o segundo valor: ");
        scanf ("%d", &valor_2);
        printf("------------------------------\n");
    
            if (valor_1 == valor_2)
            {
                printf("Os valores %d e %d sao iguais!", valor_1, valor_2);
            }
            else
            {
                if (valor_1 > valor_2)
                {
                    (maior = valor_1);
                }
                else
                {
                    (maior = valor_2);
                }
                printf("Os valors %d e %d sao diferentes, e o maior a %d", valor_1, valor_2, maior);
            }
            
    return 0;
}
