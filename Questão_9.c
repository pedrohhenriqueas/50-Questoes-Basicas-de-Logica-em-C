/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

    int a, b, suporte;    
        printf("Digite o primeiro valor de A: ");
        scanf ("%d", &a);
        printf("Digite o primeiro valor de B: ");
        scanf ("%d", &b);
    
    suporte = a;
    a = b;
    b = suporte;
    
    printf("Valor atual de A: %d\n", a);
    printf("Valor atual de B: %d", b);
    
    
    return 0;
}
