#include <stdio.h>
int main()
{
    int n, c, produto, soma, subtracao, divisao;
    printf("Digite o valor de N: ");
    scanf ("%d", &n);
    printf("-----------------------\n");
    printf("Multiplicação:\n");
    for (c=1; c<=10; c++)
    {
        produto = n * c;
        printf("%d x %d = %d\n", n, c, produto);
    }
    printf("----------------------\n");
    printf("Adição:\n");
    for (c=1; c<=10; c++)
    {
        soma = n + c;
        printf("%d + %d = %d\n", n, c, soma);
    }
    printf("----------------------\n");
    printf("Divisão:\n");
    for (c=1; c<=10; c++)
    {
        divisao = n / c;
        printf("%d / %d = %d\n", n, c, divisao);
    }
    printf("----------------------\n");
    printf("Subtração:\n");
    for (c=1; c<=10; c++)
    {
        subtracao = n - c;
        printf("%d - %d = %d\n", n, c, subtracao);
    }
    return 0;
}
