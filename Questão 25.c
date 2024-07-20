/*
Questao 25:
Faca um algoritmo que mostre os numeros pares compreendidos entre 14 e 30
(inclusive).
*/

#include <stdio.h>

int main()
{
    int c = 14;
    
    while(c <= 30)
    {
        if(c%2==0)
        {
            printf("O numero %d e par e esta entre 14 e 30\n", c);
        }
         c = c + 1;
    }
    return 0;
}