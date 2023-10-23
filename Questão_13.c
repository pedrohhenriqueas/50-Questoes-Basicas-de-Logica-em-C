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
