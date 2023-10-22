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
    printf("Média Aritmética: %d", media);
    
    return 0;
}
