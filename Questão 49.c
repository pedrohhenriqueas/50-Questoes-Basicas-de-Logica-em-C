#include <stdio.h>

int main()
{
    int h, c=1, salario, filho, maior, mediasalario, mediafilho, totalfilho, totalsalario, porcentagem, p;
    
    printf("Informe o número de habitantes da cidade: ");
    scanf ("%d", &h);
    for (h; c<=h; c++)
    {
        printf("Informe o salário do habitante n° %d: ",c);
        scanf ("%d", &salario);
        printf("Informe o número de filhos do habitante: ");
        scanf ("%d", &filho);
        totalfilho = filho + totalfilho;
        totalsalario = salario + totalsalario;
        if (maior < salario)
        {
            maior = salario;
        }
        if (salario <= 1000)
        {
            p = p + 1;     
        }
        printf("-----------------------------------------\n");
    }
    porcentagem = (p*100)/h;
    mediasalario = totalsalario/h;
    mediafilho = totalfilho/h;
    printf("-----------------------------------------\n");
    printf("Média do salário da população: %d\n", mediasalario);
    printf("Média de filhos da população: %d\n", mediafilho);
    printf("Maior salário: %d\n", maior);
    printf("Porcentagem de pessoas com salários de até R$1000,00: %d\n porcento", porcentagem);
    return 0;
}



