/*
Questao 51
Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou n ̃ao de um novo produto lanccado no mercado. Para isso forneceu o sexo do entrevistado (M - masculino, F - feminino) e a sua resposta (S - sim, N - n ̃ao). Sabendo-se que foram entrevistadas 20 pessoas, fazer um programa que calcule e escreva:

a) o numero de pessoas que responderam sim,
b) o numero de pessoas que responderam nao,
c) a porcentagem de pessoas do sexo feminino que responderam sim,
d) a porcentagem de pessoas do sexo masculino que responderam nao
*/

#include <stdio.h>

int main()
{
    char sexo, resposta;
    int sim, nao, fs, mn, m, f, pessoas = 20;
    float p1, p2;
    
    for (pessoas=20; pessoas>0; pessoas--)
    {
        printf("Sexo do intrevistado [M/F]: ");
        scanf (" %c", &sexo);
        if(sexo == 'M')
        {
            m++;
        }else{
            f++;
        }
        printf("Sua resposta [S/N]: ");
        scanf (" %c", &resposta);
        if (resposta == 'S')
        {
            sim++;
        }else{
            nao++;
        }
        if(sexo == 'M' && resposta == 'N')
        {
            mn++;
        }
        if(sexo == 'F' && resposta == 'S')
        {
            fs++; 
        }
        printf("---------------------------\n");
    }
    
    p1 = (float)(fs*100)/f;
    p2 = (float)(mn*100)/m;
    
    printf("Numero de pessoas que responderam SIM: %d\n", sim);
    printf("Numero de pessoas que responderam NÃO: %d\n", nao);
    printf("Porcentagem de MULHERES que disseram SIM: %.0f porcento\n", p1);
    printf("Porcentagem se HOMENS que disseram NAO: %.0f porcento", p2);
    return 0;
}







