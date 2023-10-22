#include <stdio.h>

int main()
{
    float qtd_macas, prc_macas, prc_final;
    
        printf("Digite a quantidade de maçãs compradas: ");
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
            
            printf ("O PREÇO FINAL DAS COMPRAS É: R$%.2f", prc_final);
            
        
        
    return 0;
}
