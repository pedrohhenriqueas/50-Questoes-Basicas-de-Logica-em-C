/*
Questao 20:
Escrever um algoritmo que leia tres valores inteiros distintos e os escreva em ordem
crescente
*/

#include <stdio.h>

int main()
{
    int v1, v2, v3, maior, meio, menor;
    
        printf("Digite o primeiro valor: ");
        scanf ("%d", &v1);
        printf("Digite o primeiro valor: ");
        scanf ("%d", &v2);
        printf("Digite o primeiro valor: ");
        scanf ("%d", &v3);
        printf("---------------------------\n");
        
        if (v1 >= v2)
        {
            if (v2 >= v3)
            {
              (maior = v1);
              (meio = v2);
              (menor = v3);
            }
        }
        if (v1 >= v3)
        {
            if (v3 >= v2)
            {
              (maior = v1);
              (meio = v3);
              (menor = v2);
            }
        }
       if (v2 >= v1)
            {
            if (v1 >= v3)
            {
               (maior = v2);
               (meio = v1);
               (menor = v3);
            }
        }
        if (v2 >= v3)
            {
            if (v3 >= v1)
            {
               (maior = v2);
               (meio = v3);
               (menor = v1);
            }
        }
        
        
        if (v3 >= v1)
        {
            if (v1 >= v2)
            {
                (maior = v3);
                (meio = v1);
                (menor = v2);
            }
        }

         if (v3 >= v2)
        {
            if (v2 >= v1)
            {
                (maior = v3);
                (meio = v2);
                (menor = v1);
            }
        }

        printf("O maior valor e: %d\n", maior);
        printf("O valor do meio e: %d\n", meio);
        printf("O menor valor e: %d\n", menor);
    return 0;
}
