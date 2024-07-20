/*
Questao 21:
Escrever um algoritmo que leia tres valores inteiros e verifique se eles podem ser os
lados de um triangulo. Se forem, informar qual o tipo de triangulo que eles formam: equilatero,
isoscele ou escaleno
*/

#include <stdio.h>

int main()
{
    int v1, v2, v3;
        printf("Escreva o primeiro lado do Triangulo: ");
        scanf ("%d", &v1);
        printf("Escreva o segundo lado do Triangulo: ");
        scanf ("%d", &v2);
        printf("Escreva o terceiro lado do Triangulo: ");
        scanf ("%d", &v3);
        printf("-------------------------------------------\n");
            
        
        if (v1 > (v2 + v3) || v2 > (v1 + v3) || v3 > (v1 + v2))
        {
            printf ("Esse triangulo é impossivel de ser formado!");
        } else {
            
             if (v1 == v2 && v2 == v3)
            {
                printf ("Triangulo Equilatero!");
            } else {
                if (v1 == v2 || v1 == v3 || v2 == v3)
                {
                    printf ("Triangulo Isoceles!");
                } else {
                
                      printf("Triangulo Escaleno!");
            }
            }
        }       
    return 0;
}