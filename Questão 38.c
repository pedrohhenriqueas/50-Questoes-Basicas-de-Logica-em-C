#include <stdio.h>

int main()
{
    
    float s, soma, n;
    int x, d;
    
    printf("Digite o valor de x: ");
    scanf ("%d", &x);
    for (d=1; d<=20; d++)
    {
        n = x - d;
        soma = (float) (1/n) + soma;
    }
    printf("Valor final de S: %.2f", soma);
    return 0;
}