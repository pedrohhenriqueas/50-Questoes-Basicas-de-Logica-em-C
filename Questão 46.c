/*
Questao 46:
Faca um algoritmo para calcular n! (fatorial de um numero n), sendo que o valor de n e fornecido pelo usuario. Sabe-se que:
n! = 1 ∗ 2 ∗ 3 ∗ ... ∗ (n − 1) ∗ n
0! = 1, por definicao
*/

#include<stdio.h>

int main()
{
    int n, c, fatorial=1;
        printf("Escreva um numero: ");
        scanf ("%d", &n);
        printf("------------------------\n");
        if (n>=1)
        {
            for(n; n>=1; n--)
            {
                fatorial = n * fatorial;
            }
            printf("O fatorial de N e: %d", fatorial);
        }
        if(n==0)
        {
            printf("O fatorial de 0 e: 1");
        }
return 0;
}
