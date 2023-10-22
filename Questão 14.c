#include <stdio.h>

int main(){
    
    
    int valor;
        printf("DIGITE UM VALOR: ");
        scanf ("%d", &valor);
        printf("--------------------\n");
        
            if (valor > 0){
                printf ("Seu valor é Positivo.");
            }
            if (valor < 0){
                printf ("Seu valor é Negativo.");
            }
            if (valor == 0){
                printf ("O valor é Zero. ");
            }
    
    return 0;
}
