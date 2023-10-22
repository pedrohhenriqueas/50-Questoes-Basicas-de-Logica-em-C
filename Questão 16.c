#include <stdio.h>

int main(){
    
    int valor;
        printf("Digite um valor: ");
        scanf ("%d", &valor);
        printf("--------------------\n");
            if (valor > 0)
        {
            printf ("Seu valor já é positivo: %d", valor);
        }
        else 
        {
            (valor = valor * -1);
            printf ("Seu valor é negativo, e positivo ele será: %d", valor);
        }
        

    return 0;
}
