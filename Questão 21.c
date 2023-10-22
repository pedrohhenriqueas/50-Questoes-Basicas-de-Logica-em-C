#include <stdio.h>

int main()
{
    int v1, v2, v3;
        printf("Escreva o primeiro lado do Triângulongulo: ");
        scanf ("%d", &v1);
        printf("Escreva o segundo lado do Triângulongulo: ");
        scanf ("%d", &v2);
        printf("Escreva o terceiro valor do triângulo: ");
        scanf ("%d", &v3);
        printf("-------------------------------------------\n");
            
        
        if (v1 > (v2 + v3) || v2 > (v1 + v3) || v3 > (v1 + v2))
        {
            printf ("Esse triângulo é impossível de ser formado!");
        } else {
            
             if (v1 == v2 && v2 == v3)
            {
                printf ("Triângulo Equilátero!");
            } else {
                if (v1 == v2 || v1 == v3 || v2 == v3)
                {
                    printf ("Triângulo Isóceles!");
                } else {
                
                      printf("Triângulo Escaleno!");
            }
            }
        }       
    return 0;
}