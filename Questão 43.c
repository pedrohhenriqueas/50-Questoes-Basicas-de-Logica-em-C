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