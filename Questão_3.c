/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int x, y, quociente, resto;
    
        printf("Escreva o valor de X: ");
        scanf ("%d", &x);
        printf("Escreva o valor de Y: ");
        scanf ("%d", &y);
            resto = x % y;
            quociente = x / y;
        printf("O quociente da divisão entre %d e %d é: %d\n", x, y, quociente);
        printf("O resto da divisão entre %d e %d é: %d", x, y, resto);


    return 0;
}
