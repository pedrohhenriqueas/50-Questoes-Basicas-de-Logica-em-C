/*
Questao 44:
Construa um algoritmo que leia varios numeros inteiros e positivos, calculando ao final da sequencia a soma e a media desses numeros. A sequencia termina quando o usuario digitar um valor negativo.
*/

#include <stdio.h>
int main()
{
    float media;
    int x, c, soma;
    while (x>=0)
    {
       printf("Escreva um numero inteiro e positivo: ");
       scanf ("%d", &x);
       if (x>=0)
       {
       soma = x + soma;
       c = c + 1;
       }else{
            printf("------------------------------------------------------------\n");
            printf("Esse numero é negativo, portanto a contagem se encerra aqui.\n");
            printf("------------------------------------------------------------\n");
       }
    }
    media = soma/c;
    printf("Soma dos numeros digitados: %d\n", soma);
    printf("Media dos numeros digitados: %.1f", media);
    return 0;
}
