/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int salario_fixo, vendas, salario_final;
    
    printf("ESCREVA O SALÁRIO FIXO DO FUNCIONÁRIO: ");
    scanf ("%d", &salario_fixo);
    printf("TOTAL FATURADO EM VENDAS: ");
    scanf ("%d", &vendas);
    printf("-----------------------------------------\n");
    
    salario_final = salario_fixo + (vendas * 15/100);
    
    printf("O SALÁRIO FIXO DO FUNCIONÁRIO É: R$%d\n", salario_fixo);
    printf("O SALÁRIO FINAL DO FUNCIONÁRIO É: R$%d", salario_final);
    

    return 0;
}
