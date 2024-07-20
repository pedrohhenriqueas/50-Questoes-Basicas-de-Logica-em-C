/*
Questao 42:
Escreva um algoritmo que leia os valores das variaveis X e A e calcule o valor de S dado por:

S = (1/A * 20/X) + (2/A-1 * 19/X2) + (3/A-2 * 18/X3) + ... + (20/A-19 * 1/X20)
*/

#include <stdio.h>
#include <math.h>


int main()
{
    float s, x, a, d1, d2, c, p=1;
    printf("Escreva o valor de X: ");
    scanf ("%f", &x);
    printf("Escreva o valor de A: ");
    scanf ("%f", &a);
    printf("--------------------------\n");
    
    for (d1=1, d2=20, c=0;d1<=20 && d2>=1 && c<=19;d1++, d2--, c++)
    {
        p = p * x;
        s += (d1/(a-c)) * (d2/p);
    }
    printf("Resultado final de S: %.2f\n", s);
    return 0;
}