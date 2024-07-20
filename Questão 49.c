/*
Questao 49:
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salario e o numero de filhos. A prefeitura deseja saber:
a) A media do salario da populacao;
b) A media do numero de filhos;
c) O maior salario;
d) A porcentagem de pessoas com salarios ate R$1000,00.
*/

#include <stdio.h>

int main()
{
    int h, c=1, salario, filho, maior, mediasalario, mediafilho, totalfilho, totalsalario, porcentagem, p;
    
    printf("Informe o numero de habitantes da cidade: ");
    scanf ("%d", &h);
    for (h; c<=h; c++)
    {
        printf("Informe o salario do habitante n° %d: ",c);
        scanf ("%d", &salario);
        printf("Informe o numero de filhos do habitante: ");
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
    printf("Media do salario da populacao: %d\n", mediasalario);
    printf("Media de filhos da populacao: %d\n", mediafilho);
    printf("Maior salario: %d\n", maior);
    printf("Porcentagem de pessoas com salarios de ate R$1000,00: %d\n porcento", porcentagem);
    return 0;
}



