/*
Questao 2:
Fazer um algoritmo que leia um numero e mostre o seu antecessor e o seu sucessor.
*/

#include <stdio.h>

int main(){
    int numero, antecessor, sucessor;
    printf("Escreva um numero: ");
    scanf ("%d", &numero);
        antecessor = numero - 1;
        sucessor = numero + 1;
    printf("O sucessor de %d: %d\n", numero, sucessor);
    printf("O antecessor de %d: %d", numero, antecessor);
    return 0;
}
