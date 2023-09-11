/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
