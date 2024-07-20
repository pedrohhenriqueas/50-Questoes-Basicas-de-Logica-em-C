/*
Questao 14:
Faca um algoritmo que recebe um valor inteiro e mostra se o valor e zero, positivo
ou negativo.
*/

#include <stdio.h>

int main(){
    
    
    int valor;
        printf("DIGITE UM VALOR: ");
        scanf ("%d", &valor);
        printf("--------------------\n");
        
            if (valor > 0){
                printf ("Seu valor e Positivo.");
            }
            if (valor < 0){
                printf ("Seu valor e Negativo.");
            }
            if (valor == 0){
                printf ("O valor e Zero. ");
            }
    
    return 0;
}
