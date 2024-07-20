/*
Construa um algoritmo que calcule e apresente o total da compra realizada pelo cliente em uma loja. Sao fornecidos para o algoritmo, o preco da etiqueta (PE) de cada um dos produtos comprados e, com a compra encerrada (PE = 0), a condicao de pagamento escolhida pelo cliente (CP). Utilize para os calculos a tabela de condicoes de pagamento a seguir:

Tabela 1: Codigo da condicao de pagamento
Tabela 2: Condicao de pagamento

1- A vista em dinheiro ou cheque com 10% de desconto.
2- A vista com cartao de credito, com 5% de desconto
3- Em 2 vezes, preco normal de etiqueta sem jutos
4- Em 3 vezes, preco de etiqueta co acrescimo de 10%
*/

#include <stdio.h>

int main()
{
    float pe, total, final;
    int cp;
    
    printf("Informe o preco da etiqueta dos produtos: ");
    scanf ("%f", &pe);
    while (pe > 0)
    {
        total = total + pe;
        printf("Informe o preco da eriqueta dos produtos: ");
        scanf ("%f", &pe);
    }
    printf("---------------------------------------------\n");
    printf("Compra encerrada.\n");
    printf("Preço total da compra: R$%.2f\n", total);
    printf("---------------------------------------------\n");
    printf("[1] A vista em dinheiro ou cheque.\n");
    printf("[2] A vista com cartao de credito.\n");
    printf("[3] Em 2 vezes.\n");
    printf("[4] Em 3 vezes.\n");
    printf("---------------------------------------------\n");
    printf("Escolha a condicao de pagamento: ");
    scanf ("%d", &cp);
    switch (cp)
    {
        case 1:
            final = total - (total/10);
            break;
        case 2:
            final = total - (total/20);
            break;
        case 3:
            final = total;
            break;
        case 4:
            final = total + (total/10);
    }
    printf("----------------------------------------------\n");
    printf("Valor final da compra: RS%.2f", final);
    return 0;
}



