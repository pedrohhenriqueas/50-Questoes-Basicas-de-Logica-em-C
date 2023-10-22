#include<stdio.h>

int main()
{
    int n, c, fatorial=1;
        printf("Escreva um número: ");
        scanf ("%d", &n);
        printf("------------------------\n");
        if (n>=1)
        {
            for(n; n>=1; n--)
            {
                fatorial = n * fatorial;
            }
            printf("O fatorial de N é: %d", fatorial);
        }
        if(n==0)
        {
            printf("O fatorial de 0 é: 1");
        }
return 0;
}
