#include <stdio.h>

int main()
{
    int atual, antecessor, sucessor;
    atual = 1;
    for (int c=1;c<=10;c++)
    {
        printf ("%d° número da Fibonacci: %d\n", c, atual);
        sucessor = atual + antecessor;
        antecessor = atual;
        atual = sucessor;
    }
    return 0;
}