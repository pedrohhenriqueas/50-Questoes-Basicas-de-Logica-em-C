#include <stdio.h>

int main(){
    int v1, v2, soma, produto, quociente;    
        printf("Escreva o primeiro número: ");
        scanf ("%d", &v1);
        printf("Escreva o segundo número: ");
        scanf ("%d", &v2);
        
            soma = v1 + v2;
            produto = v1 * v2;
            quociente = v1 / v2;
        
        printf("Resultado da soma entre %d e %d: %d\n", v1, v2, soma);
        printf("Produto dos números %d e %d: %d\n", v1, v2, produto);
        printf("Quociente da divisão dos números %d e %d: %d\n", v1, v2, quociente);
        

    return 0;
}
