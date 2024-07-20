/*
Questao 8
Escreva um algoritmo que recebe o valor do salario fixo e o total de vendas efetuadas
por um vendedor de uma loja durante o mes (em dinheiro). Sabendo que este vendedor ganha
15% de comissao sobre suas vendas efetuadas, informar o salario fixo e salario no final do mes.
*/

#include <stdio.h>

int main(){
    
    int salario_fixo, vendas, salario_final;
    
    printf("ESCREVA O SALARIO FIXO DO FUNCIONARIO: ");
    scanf ("%d", &salario_fixo);
    printf("TOTAL FATURADO EM VENDAS: ");
    scanf ("%d", &vendas);
    printf("-----------------------------------------\n");
    
    salario_final = salario_fixo + (vendas * 15/100);
    
    printf("O SALARIO FIXO DO FUNCIONARIO: R$%d\n", salario_fixo);
    printf("O SALARIO FINAL DO FUNCIONARIO: R$%d", salario_final);
    

    return 0;
}
