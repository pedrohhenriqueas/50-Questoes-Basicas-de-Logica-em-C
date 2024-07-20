/*
Questao 7:
Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro. (A = 2πr(h + r), V = πr2h)
*/

#include <stdio.h>

int main(){
    int altura, raio, volume, area;
        printf("Escreva a Altura do Cilindro: ");
        scanf ("%d", &altura);
        printf("Escreva o raio do Cilindro: ");
        scanf ("%d", &raio);
        
            volume = 3.14 * raio * raio * altura;
            area = 2 * 3.14 * raio * (raio + altura);
        
        printf("Volume do cilindro: %d\n", volume);
        printf("Area do cilindro: %d", area);

    return 0;
}
