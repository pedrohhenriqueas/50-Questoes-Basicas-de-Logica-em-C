/*
Quest ̃ao 24.
Escreva um programa que calcule o Valor a Pagar pela conta de energia eletrica
para uma determinada Classe Consumidora. Veja as informacoes a seguir:

a. O programa deve receber como dados de entrada: o tipo da Classe Consumidora, (conforme definido na Tabela 1) e o Consumo em quilowatts/hora (KW h);
b. O calculo do Valor do Fornecimento (VF), em Reais (R$), e definido pela seguinte formula:
VF = Consumo ∗ Tarifa, onde a tarifa e definida na Tabela 1, conforme a classe consumidora;
c. O Valor a Pagar (VP) e definido pela seguinte formula: VP = VF + ICMS, onde a taxa de
ICMS e calculada aplicando uma aliquota de 30% ao valor do fornecimento (ICMS = 0.3 ∗ VF)

A = 0.5
B = 0.8
C = 1.0

*/

#include <stdio.h>

int main()
{
    float tarifa, consumo, vf, vp;
    char cc;
        printf("Escreva sua Classe Consumidora: ");
        scanf ("%c", &cc);
        switch (cc)
        {
            case 'a':
            case 'A':
                tarifa = 0.5;
                break;
            case 'b': 
            case 'B':
                tarifa = 0.8;
                break;
            case 'c':
            case 'C':
                tarifa = 1.0;
                break;
        }
        printf("Escreva seu consumo em KWh: ");
        scanf ("%f", &consumo);
        printf("----------------------------------\n");
    
        vf = consumo * tarifa;
        vp = vf + (0.3 * vf);
        
        printf ("VALOR A PAGAR: %.2f", vp);

    return 0;
}
