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
            printf("A equação não possui solução real, pois o Delta é negativo!");
        }
        if (delta == 0)
        {
            s1 = ((-b1) + sqrt(delta)) / (2 * a1);
            printf("O Delta é 0, portanto as duas soluções terão o mesmo valor: %d", s1);
        }
        if (delta > 0)
        {
            s1 = ((-b1) + sqrt(delta)) / (2 * a1);
            s2 = ((-b1) - sqrt(delta)) / (2 * a1);
            printf("Aqui estão as soluções da equação:\n");
            printf("Solução 1: %d\n", s1);
            printf("Solução 2: %d", s2);
        }
        
        
        

    return 0;
}