/*
Questao 13:
O preco de um automovel e calculado pela soma do preco de fabrica, o preco dos
impostos (45% do preco de fabrica) e a porcentagem do revendedor (28% do preco de fabrica).
Fazer um algoritmo que leia o preco de fabrica. Calcule e mostre o preco final do carro.
*/

#include <stdio.h>

int main(){
    
    int preco_fabrica, imposto, porcentagem_vendedor, preco_final;
    
        printf("PREÇO DE FABRICA DO AUTOMOVEL: ");
        scanf ("%d", &preco_fabrica);
        
            imposto = preco_fabrica * 45/100;
            porcentagem_vendedor = preco_fabrica * 28/100;
            preco_final = preco_fabrica + imposto + porcentagem_vendedor;
    
        printf("O PREÇO FINAL DO AUTOMOVEL E: %d", preco_final);
        return 0;
}
