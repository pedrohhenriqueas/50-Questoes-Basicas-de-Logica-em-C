#include <stdio.h>

int main()
{
    int valor_1, valor_2, maior;
        printf("Digite o primeiro valor: ");
        scanf ("%d", &valor_1);
        printf("Digite o segundo valor: ");
        scanf ("%d", &valor_2);
        printf("------------------------------\n");
    
            if (valor_1 == valor_2)
            {
                printf("Os valores %d e %d são iguais!", valor_1, valor_2);
            }
            else
            {
                if (valor_1 > valor_2)
                {
                    (maior = valor_1);
                }
                else
                {
                    (maior = valor_2);
                }
                printf("Os valors %d e %d são diferentes, e o maior é %d", valor_1, valor_2, maior);
            }
            
    return 0;
}
