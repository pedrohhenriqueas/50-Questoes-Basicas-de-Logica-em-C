#include <stdio.h>

int main()
{
    int c = 15, quadrado;
    quadrado = c * c;
    
    while(c <= 30)
    {
      printf("O quadrado de %d é: %d\n", c, quadrado);
      c = c + 1;
      quadrado = c * c;
    }
    return 0;
}