/*
Questao 10:
Fac ̧a um algoritmo que mostra a quantidade de cedulas de um caixa eletronico de
um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
apresente a quantidade de cada cedula que o cliente devera receber, de forma que a quantidade
de cedulas seja o menor possivel.
*/

#include <stdio.h>

int main()
{
    int valor, resto, n100, n50, n20, n10, n5, n2, n1;
    
        printf("VALOR A SACAR: ");
        scanf ("%d", &valor);
        
        if (valor >= 100);
        {n100 = valor / 100;}
        
        if (valor % 100 > 0);
        {resto = valor % 100;}
        
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
