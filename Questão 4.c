/*
Questao 4:
Fazer um algoritmo que calcule e mostre:
a) A soma entre dois n  ́umeros
b) O produto entre eles
c) O quociente entre eles
*/

#include <stdio.h>

int main(){
    int v1, v2, soma, produto, quociente;    
        printf("Escreva o primeiro numero: ");
        scanf ("%d", &v1);
        printf("Escreva o segundo numero: ");
        scanf ("%d", &v2);
        
            soma = v1 + v2;
            produto = v1 * v2;
            quociente = v1 / v2;
        
        printf("Resultado da soma entre %d e %d: %d\n", v1, v2, soma);
        printf("Produto dos números %d e %d: %d\n", v1, v2, produto);
        printf("Quociente da divisao dos numeros %d e %d: %d\n", v1, v2, quociente);
        

    return 0;
}
