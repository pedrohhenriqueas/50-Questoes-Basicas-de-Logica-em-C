/*
Questao 11:
Faca um algoritmo que auxiliar  ́a um funcionario de um caixa de supermercado. O
algoritmo devera receber como entrada o valor da compra do cliente e o valor pago pelo cliente,
em seguida o algoritmo devera apresentar o troco da compra, de forma que o mesmo deve
apresentar a quantidade de cedulas e moedas para compor o troco do cliente
*/

#include <stdio.h>

int main(){
    
    int valor_compra, valor_pago, troco, resto, n100, n50, n20, n10, n5, n2, n1;
    
        printf("DIGITE O VALOR DA COMPRA: ");
        scanf ("%d", &valor_compra);
        printf("DIGITE O VALOR PAGO PELO CLIENTE: ");
        scanf ("%d", &valor_pago);
    
            troco = valor_pago - valor_compra;
    
        printf("--------------------------\n");
        printf("SEU TROCO E DE: %d REAIS\n", troco);
        printf("--------------------------\n");
    
    
        
        if (troco >= 100);
        {n100 = troco / 100;}
        
        if (troco % 100 > 0);
        {resto = troco % 100;}
        
        if (resto >= 50);
        {n50 = resto / 50;}
        
        if (resto % 50 > 0);
        {resto = resto % 50;}
        
        if (resto >= 20);
        {n20 = resto / 20;}
        
        if (resto % 20 > 0);
        {resto = resto % 20;}
        
        if (resto >= 10);
        {n10 = resto / 10;}
        
        if (resto % 10 > 0);
        {resto = resto % 10;}
        
        if (resto >= 5);
        {n5 = resto / 5;}
        
        if (resto % 5 > 0);
        {resto = resto % 5;}
        
        if (resto >= 2);
        {n2 = resto / 2;}
        
        if (resto % 2 > 0);
        {resto = resto % 2;}
        
        if (resto >= 1);
        {n1 = resto;}
        
            printf("CEDULAS DE 100: %d\n", n100);
            printf("CEDULAS DE 50: %d\n", n50);
            printf("CEDULAS DE 20: %d\n", n20);
            printf("CEDULAS DE 10: %d\n", n10);
            printf("CEDULAS DE 5: %d\n", n5);
            printf("CEDULAS DE 2: %d\n", n2);
            printf("CEDULAS DE 1: %d\n", n1);


    return 0;
}

