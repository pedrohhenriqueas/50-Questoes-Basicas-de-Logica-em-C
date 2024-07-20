/*
Questao 34:
Ler 10 valores, um de cada vez, e contar quantos deles estao no intervalo [10.. 50] e quantos deles est ̃ao fora deste intervalo. Mostrar as quantidades calculadas.
*/

#include <stdio.h>

int main()
{
    int c = 1, n, dentro, fora;
    while(c <= 10)
    {
    printf("Escreva o %d° valor: ", c);
    scanf ("%d", &n);
    if (n >= 10 && n <= 50)
    {
        dentro = dentro + 1;
    }
    else
    {
        fora = fora + 1;   
    }
    c = c + 1;
    }
    printf("---------------------------------------------------------\n");
    printf("Quantidade de numeros dentro do intervalo de 10 e 50: %d\n", dentro);
    printf("Quantidade de numeros fora do intervalo de 10 e 50: %d", fora);
    return 0;
}
