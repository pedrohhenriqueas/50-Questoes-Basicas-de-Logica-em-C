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
