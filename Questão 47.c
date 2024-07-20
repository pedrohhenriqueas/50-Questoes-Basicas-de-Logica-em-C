/*
Questao 47:
Tendo como entrada a altura (h) e o sexo (1: feminino e 2: masculino) de uma pessoa, construa um algoritmo que calcule e mostre o seu peso ideal, calculado da seguinte maneira:
homens: 72.7 ∗ h–58
mulheres: 62.1 ∗ h–44.7
A altura negativa indica o fim da entrada de dados e do algoritmo.
*/

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
                    printf("O  peso ideal para sua altura e: %.2f\n", peso);
                    printf("--------------------------------------\n");
                    break;
                case 2:
                    peso = 72.7 * h - 58;
                    printf("O  peso ideal para sua altura e: %.2f\n", peso);
                    printf("--------------------------------------\n");
                    break;
            }
        }else{
            printf("----------------------------------------------------\n");
            printf("A altura e negativa entao o programa sera encerrado!");
             }
    }
    return 0;
}
