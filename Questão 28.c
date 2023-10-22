#include <stdio.h>

int main()
{
    int c = 1, soma=1;
    while(c <= 100)
    {
      printf ("Soma Número %d = %d\n", c, soma);
      c = c + 1;
      soma = soma + c;
    }
return 0;
}