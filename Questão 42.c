#include <stdio.h>
#include <math.h>


int main()
{
    float s, x, a, d1, d2, c, p=1;
    printf("Escreva o valor de X: ");
    scanf ("%f", &x);
    printf("Escreva o valor de A: ");
    scanf ("%f", &a);
    printf("--------------------------\n");
    
    for (d1=1, d2=20, c=0;d1<=20 && d2>=1 && c<=19;d1++, d2--, c++)
    {
        p = p * x;
        s += (d1/(a-c)) * (d2/p);
    }
    printf("Resultado final de S: %.2f\n", s);
    return 0;
}