
#include <stdio.h>

int main()
{
    int h, n, c = 1, soma;
    printf("Digite o valor de N: ");
    scanf ("%d", &n);
    while(c < n)
    {
        soma = soma + c;
        h = n + soma;
        c = c + 1;
    }
    printf("-------------------------\n");
    printf("Valor de H: %d", h);
    return 0;
}
