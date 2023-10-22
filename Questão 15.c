#include <stdio.h>

int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf ("%d", &valor);
    printf("------------------\n");
        
        if (valor % 2 > 0)
        {
            printf ("Seu valor é ímpar!");
        }
        else {
            printf ("Seu valor é par!");
        }

    return 0;
}
