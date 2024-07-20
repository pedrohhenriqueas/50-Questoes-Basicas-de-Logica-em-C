/*
Questao 15:
Faca um algoritmo que recebe um valor e mostra se o mesmo e par ou impar
*/

#include <stdio.h>

int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf ("%d", &valor);
    printf("------------------\n");
        
        if (valor % 2 > 0)
        {
            printf ("Seu valor e ímpar!");
        }
        else {
            printf ("Seu valor e par!");
        }

    return 0;
}
