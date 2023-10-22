#include <stdio.h>

int main()
{
    int c = 50, f;
    printf("Conversão de Celsius para Ferenheit\n");
    printf("------------------------------------\n");
    while(c <= 65)
    {
        f = (c * 9/5) + 32;
        printf("%d°C = %d°F\n", c, f);
        c = c + 1;  
    }

return 0;
}
