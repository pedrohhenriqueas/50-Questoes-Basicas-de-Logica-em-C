/*
Questao 45: 
Construa um algoritmo que apresente a tabuada de um numero N. O valor de N sera fornecido pelo usuario.
*/

#include <stdio.h>
int main()
{
    int n, c, produto, soma, subtracao, divisao;
    printf("Digite o valor de N: ");
    scanf ("%d", &n);
    printf("-----------------------\n");
    printf("Multiplicacao:\n");
    for (c=1; c<=10; c++)
    {
        produto = n * c;
        printf("%d x %d = %d\n", n, c, produto);
    }
    printf("----------------------\n");
    printf("Adicao:\n");
    for (c=1; c<=10; c++)
    {
        soma = n + c;
        printf("%d + %d = %d\n", n, c, soma);
    }
    printf("----------------------\n");
    printf("Divisao:\n");
    for (c=1; c<=10; c++)
    {
        divisao = n / c;
        printf("%d / %d = %d\n", n, c, divisao);
    }
    printf("----------------------\n");
    printf("Subtracao:\n");
    for (c=1; c<=10; c++)
    {
        subtracao = n - c;
        printf("%d - %d = %d\n", n, c, subtracao);
    }
    return 0;
}
