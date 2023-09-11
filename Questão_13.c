/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int preco_fabrica, imposto, porcentagem_vendedor, preco_final;
    
        printf("PREÇO DE FÁBRICA DO AUTOMÓVEL: ");
        scanf ("%d", &preco_fabrica);
        
            imposto = preco_fabrica * 45/100;
            porcentagem_vendedor = preco_fabrica * 28/100;
            preco_final = preco_fabrica + imposto + porcentagem_vendedor;
    
        printf("O PREÇO FINAL DO AUTOMÓVEL É: %d", preco_final);
        return 0;
}
