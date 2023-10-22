#include <stdio.h>

int main()
{   
    float tarifa, consumo, vf, vp;
    char cc;
        printf("Escreva sua Classe Consumidora: ");
        scanf ("%c", &cc);
        switch (cc)
        {
            case 'a':
            case 'A':
                tarifa = 0.5;
                break;
            case 'b': 
            case 'B':
                tarifa = 0.8;
                break;
            case 'c':
            case 'C':
                tarifa = 1.0;
                break;
        }
        printf("Escreva seu consumo em KWh: ");
        scanf ("%f", &consumo);
        printf("----------------------------------\n");
    
        vf = consumo * tarifa;
        vp = vf + (0.3 * vf);
        
        printf ("VALOR A PAGAR: %.2f", vp);

    return 0;
}
