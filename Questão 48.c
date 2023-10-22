#include <stdio.h>

int main()
{
    float pe, total, final;
    int cp;
    
    printf("Informe o preço da etiqueta dos produtos: ");
    scanf ("%f", &pe);
    while (pe > 0)
    {
        total = total + pe;
        printf("Informe o preço da eriqueta dos produtos: ");
        scanf ("%f", &pe);
    }
    printf("---------------------------------------------\n");
    printf("Compra encerrada.\n");
    printf("Preço total da compra: R$%.2f\n", total);
    printf("---------------------------------------------\n");
    printf("[1] A vista em dinheiro ou cheque.\n");
    printf("[2] A vista com cartão de crédito.\n");
    printf("[3] Em 2 vezes.\n");
    printf("[4] Em 3 vezes.\n");
    printf("---------------------------------------------\n");
    printf("Escolha a condição de pagamento: ");
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



