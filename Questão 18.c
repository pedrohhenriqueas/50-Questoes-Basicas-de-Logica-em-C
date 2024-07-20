/*
Questao 18:
As macas custam R$0.30 cada, se forem compradas menos do que uma duzia, e
R$0.25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o numero de macas
compradas, calcule e mostre o valor total da compra.
*/

#include <stdio.h>

int main()
{
    float qtd_macas, prc_macas, prc_final;
    
        printf("Digite a quantidade de macas compradas: ");
        scanf ("%f", &qtd_macas);
        printf("------------------------------------------\n");
        
            if (qtd_macas < 12)
            {
              (prc_macas = 0.30);
              (prc_final = qtd_macas * prc_macas);
            }
            else
            {
                (prc_macas = 0.25);
                (prc_final = qtd_macas * prc_macas);
            }
            
            printf ("O PREÇO FINAL DAS COMPRAS E: R$%.2f", prc_final);
            
        
        
    return 0;
}
