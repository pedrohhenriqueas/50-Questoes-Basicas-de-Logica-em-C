#include <stdio.h>

int main()
{
    int k, n,c=1, produto=1;
    printf("Escreva o valor de K: ");
    scanf ("%d", &k);
    printf("Escreva a potência N para elevar K: ");
    scanf ("%d", &n);
    while (c<=n)
    {
        produto = k * produto;
        c = c + 1;
    }
    printf("----------------------------------\n");
    printf("Resultado da potenciação de K elevado a N é: %d", produto);
    return 0;
}