/*
Questao 41:
Escreva um programa que calcule as n primeiras potencias do numero k. Para n = 3 e k = 2 teremos:
• 2 elevado a 1 = 2
• 2 elevado a 2 = 4
• 2 elevado a 3 = 8
*/

#include <stdio.h>

int main()
{
    int k, n,c=1, resultado=1;
    printf("Escreva o valor de K: ");
    scanf ("%d", &k);
    printf("Escreva a potência N para elevar K: ");
    scanf ("%d", &n);
    printf("---------------------------------------\n");
    for(c=1;c<=n;c++)
    {
        resultado = k * resultado;
        printf("%d elevado a %d = %d\n", k, c, resultado);
    }
    return 0;
}