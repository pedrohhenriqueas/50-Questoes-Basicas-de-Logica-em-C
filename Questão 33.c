/*
Questao 33:
Calcular e mostrar a media aritḿetica dos numeros pares compreendidos entre 13
e 73.
*/

#include <stdio.h>

int main()
{
    int c = 13, soma = 0, media, n;
    while(c < 73)
    {
        if(c % 2 == 0)
        {
            soma = c + soma;
            n = n + 1;
        }
        c = c + 1;
    }
    media = soma / n;
    printf("Soma Final: %d\n", soma);
    printf("Media Aritmetica: %d", media);
    
    return 0;
}
