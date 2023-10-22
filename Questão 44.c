#include <stdio.h>
int main()
{
    float media;
    int x, c, soma;
    while (x>=0)
    {
       printf("Escreva um número inteiro e positivo: ");
       scanf ("%d", &x);
       if (x>=0)
       {
       soma = x + soma;
       c = c + 1;
       }else{
            printf("------------------------------------------------------------\n");
            printf("Esse número é negativo, portanto a contagem se encerra aqui.\n");
            printf("------------------------------------------------------------\n");
       }
    }
    media = soma/c;
    printf("Soma dos números digitados: %d\n", soma);
    printf("Média dos números digitados: %.1f", media);
    return 0;
}
