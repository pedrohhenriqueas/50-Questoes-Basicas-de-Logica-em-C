#include <stdio.h>

int main()
{
    int c=1, n;
        while (c <= 5)
        {
            printf("Escreva o %d número: ", c);
            scanf ("%d", &n);
            c = c + 1;
            if(n <= 200 && n >= 100)
            {
               printf("Você digitou um núumero entre 100 e 200\n") ;
            }
            else
            {
                printf("Você digitou um número fora da faixa entre 100 e 200\n");
            }
            printf("-----------------------------------------------------\n");
        }
return 0;
}