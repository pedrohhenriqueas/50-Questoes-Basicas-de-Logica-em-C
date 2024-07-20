/*
Questao 43:
Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessario para que essa massa se torne menor do que 0.5 gramas. Escrever a massa inicial, a massa final e o tempo calculado em segundos.
*/

#include <stdio.h>
#include <math.h>

int main()
{ 
    float mi, mf;
    int tempo;
    printf("Escreva a massa Inicial: ");
    scanf ("%f", &mi);
    printf("-----------------------------\n");
    while (mi>= 0.5)
    {
        mi = mi/2;
        tempo = tempo + 50;
    }
    mf = mi;
    printf("Massa final: %.2f\n", mf);
    printf("Tempo em segundos: %d segundos", tempo);
    return 0;
}