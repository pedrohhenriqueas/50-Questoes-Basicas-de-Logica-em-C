#include <stdio.h>

int main(){
    int numero, antecessor, sucessor;
    printf("Escreva um número: ");
    scanf ("%d", &numero);
        antecessor = numero - 1;
        sucessor = numero + 1;
    printf("O sucessor de %d é %d\n", numero, sucessor);
    printf("O antecessor de %d é %d", numero, antecessor);
    return 0;
}
