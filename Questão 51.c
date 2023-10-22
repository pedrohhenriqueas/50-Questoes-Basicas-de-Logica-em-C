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
    
    printf("Número de pessoas que responderam SIM: %d\n", sim);
    printf("Número de pessoas que responderam NÃO: %d\n", nao);
    printf("Porcentagem de MULHERES que disseram SIM: %.0f porcento\n", p1);
    printf("Porcentagem se HOMENS que disseram NÃO: %.0f porcento", p2);
    return 0;
}







