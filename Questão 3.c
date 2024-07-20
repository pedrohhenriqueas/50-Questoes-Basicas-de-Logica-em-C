/*
Questao 3:
Fazer um algoritmo que obtenha dois numeros inteiros, x e y, mostre o quociente e
o resto da divisao inteira entre eles.
*/

#include <stdio.h>

int main(){
    int x, y, quociente, resto;
    
        printf("Escreva o valor de X: ");
        scanf ("%d", &x);
        printf("Escreva o valor de Y: ");
        scanf ("%d", &y);
            resto = x % y;
            quociente = x / y;
        printf("O quociente da divisao entre %d e %d: %d\n", x, y, quociente);
        printf("O resto da divisao entre %d e %d: %d", x, y, resto);


    return 0;
}
