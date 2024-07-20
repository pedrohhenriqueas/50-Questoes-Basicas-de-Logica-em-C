/*
Questao 31:
A convers ̃ao de graus Fahrenheit para Celsius  ́e obtida por c = 5/9 ∗ (f − 32). Faca um algoritmo que calcule e escreva uma tabela de graus Celsius em graus Fahrenheit, cujos graus variem de 50 a 65 de 1 em 1.
*/
#include <stdio.h>

int main()
{
    int c = 50, f;
    printf("Conversao de Celsius para Ferenheit\n");
    printf("------------------------------------\n");
    while(c <= 65)
    {
        f = (c * 9/5) + 32;
        printf("%d°C = %d°F\n", c, f);
        c = c + 1;  
    }

return 0;
}
