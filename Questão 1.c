/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int v1, v2, resultado;
    
        printf("Escreva o primeiro valor: ");
        scanf ("%d", &v1);
        printf("Escreva o segundo valor: ");
        scanf ("%d", &v2);
        
            resultado = v1 * v2;
        
        printf("O resultado da multiplicação de %d * %d = %d", v1, v2, resultado);
    return 0;
}
