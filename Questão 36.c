#include <stdio.h>

int main()
{
    float s=1, soma;
    int c=1;
    
    for(c=2;c<=10;c++)
    {
        soma=(1.0/c);
        s = soma + s;
    }
    printf("O valor de S é: %.2f", s);
    return 0;
}
