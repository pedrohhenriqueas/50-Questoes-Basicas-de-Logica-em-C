/*
Questao 6
Faca um algoritmo que recebe o valor do raio de um circulo e apresenta o valor da area desse circulo.
*/

#include <stdio.h>

int main(){
    int raio, area;
    printf("Escreva o valor do raio do Circulo: ");
    scanf ("%d", &raio);
    
    area = 3.14 * raio * raio;
    
    printf("A area do circulo de raio %d: %d", raio, area);

    return 0;
}
