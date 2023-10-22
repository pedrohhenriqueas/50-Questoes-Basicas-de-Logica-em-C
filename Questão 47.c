#include <stdio.h>

int main()
{
    float h, peso;
    int sexo;
    while (h >= 0)
    {
        printf("Digite a altura: ");
        scanf ("%f", &h);
        if (h >= 0)
        {
            printf("---------------------\n");
            printf("[1]Feminino.\n");
            printf("[2]Masculino.\n");
            printf("Digite o sexo: ");
            scanf ("%d", &sexo);
            printf("--------------------------------------\n");
            switch(sexo)
            {
                case 1:
                    peso = 62.1 * h - 44.7;
                    printf("O  peso ideal para sua altura é: %.2f\n", peso);
                    printf("--------------------------------------\n");
                    break;
                case 2:
                    peso = 72.7 * h - 58;
                    printf("O  peso ideal para sua altura é: %.2f\n", peso);
                    printf("--------------------------------------\n");
                    break;
            }
        }else{
            printf("----------------------------------------------------\n");
            printf("A altura é negativa então o programa será encerrado!");
             }
    }
    return 0;
}
