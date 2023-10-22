#include <stdio.h>

int main()
{
    char sexo;
    int homens, mulheres, pessoas=15;
    float altura, maior, menor=999, hmulheres, media;
    
    while(pessoas>0)
    {
        printf("Escolha o sexo [M/F]: ");
        scanf (" %c", &sexo);
        switch (sexo)
        {
            case 'M': 
                homens = homens + 1;
                break;
            case 'F': 
                mulheres = mulheres + 1;
                break;
        }
        printf("Informe a altura: ");
        scanf ("%f", &altura);
        printf("------------------------\n");
        if (altura > maior)
        {
            maior = altura;
        }
        if (altura < menor)
        {
            menor = altura;
        }
        if(sexo == 'F')
        {
            hmulheres = hmulheres + altura;
        }
        pessoas = pessoas - 1;
    }
    media = hmulheres/mulheres;
    printf("-----------------------------------\n");
    printf("Maior e a menor altura do grupo: %.2f e %.2f\n", maior, menor);
    printf("Média da altura das mulheres: %.2f\n", media);
    printf("Número de homens: %d\n", homens);
    return 0;
}