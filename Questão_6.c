/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int raio, area;
    printf("Escreva o valor do raio do Círculo: ");
    scanf ("%d", &raio);
    
    area = 3.14 * raio * raio;
    
    printf("A área do circulo de raio %d é: %d", raio, area);

    return 0;
}
