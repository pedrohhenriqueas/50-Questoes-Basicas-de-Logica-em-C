/*
Questao 1:
Faca um algoritmo que recebe dois valores inteiros e mostra o resultado da multiplicacao.
*/

#include <stdio.h>

int main(){
    int v1, v2, resultado;
    
        printf("Escreva o primeiro valor: ");
        scanf ("%d", &v1);
        printf("Escreva o segundo valor: ");
        scanf ("%d", &v2);
        
            resultado = v1 * v2;
        
        printf("O resultado da multiplicacao de %d * %d = %d", v1, v2, resultado);
    return 0;
}
