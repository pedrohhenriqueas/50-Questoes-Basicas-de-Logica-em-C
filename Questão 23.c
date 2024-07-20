/*
Questao 23:
Escreva um algoritmo para calcular as ra ́ızes de uma equacao do 2º grau pela
formula x = (−b±√Delta)/2a, onde Delta = b2–4ac e o discriminante da equacao.

Para o discriminante ha tres poss ́ıveis situacoes:

a) Se Delta < 0, nao ha solucao real, pois nao existe raiz quadrada de numero negativo.
b) Se Delta = 0, ha duas solucoes iguais: x1 = x2 = −b/2a 
c) Se Delta > 0, ha duas solucoes reais e diferentes: x1 e x2 .
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a1, b1, c1, delta, s1, s2;
    
        printf("Escreva os valores da equação! \n");
        printf("Escreva o valor de A: ");
        scanf ("%d", &a1);
        printf("Escreva o valor de B: ");
        scanf ("%d", &b1);
        printf("Escreva o valor de C: ");
        scanf ("%d", &c1);
        printf("-----------------------\n");
        
            delta = (b1 * b1) - (4 * a1 * c1);
            
         if (delta < 0)
        {
            printf("A equacao nao possui solucao real, pois o Delta e negativo!");
        }
        if (delta == 0)
        {
            s1 = ((-b1) + sqrt(delta)) / (2 * a1);
            printf("O Delta e 0, portanto as duas solucoes terao o mesmo valor: %d", s1);
        }
        if (delta > 0)
        {
            s1 = ((-b1) + sqrt(delta)) / (2 * a1);
            s2 = ((-b1) - sqrt(delta)) / (2 * a1);
            printf("Aqui estao as solucoes da equacao:\n");
            printf("Solucao 1: %d\n", s1);
            printf("Solucao 2: %d", s2);
        }

    return 0;
}