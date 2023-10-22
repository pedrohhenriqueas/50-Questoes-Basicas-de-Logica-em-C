#include <stdio.h>

int main(){
    int altura, raio, volume, area;
        printf("Escreva a Altura do Cilindro: ");
        scanf ("%d", &altura);
        printf("Escreva o raio do Cilindro: ");
        scanf ("%d", &raio);
        
            volume = 3.14 * raio * raio * altura;
            area = 2 * 3.14 * raio * (raio + altura);
        
        printf("Volume do cilindro: %d\n", volume);
        printf("Área do cilindro: %d", area);

    return 0;
}
