/*
Questao 16:
Faca um algoritmo que recebe um valor inteiro, caso esse nuumero seja positivo,
mostre o valor digitado, caso seja negativo mostre o valor digitado com o sinal invertido
*/

#include <stdio.h>

int main(){
    
    int valor;
        printf("Digite um valor: ");
        scanf ("%d", &valor);
        printf("--------------------\n");
            if (valor > 0)
        {
            printf ("Seu valor ja e positivo: %d", valor);
        }
        else 
        {
            (valor = valor * -1);
            printf ("Seu valor e negativo, e positivo ele sera: %d", valor);
        }
        

    return 0;
}
