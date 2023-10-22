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