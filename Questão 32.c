#include <stdio.h>

int main()
{
    int c = 1, i, maior;
    while (c <= 20)
    {
        printf("Digite o %d número: ", c);
        scanf ("%d", &i);
        c = c + 1;
        if(i >= maior)
        {
            maior = i;
        }
    }
    printf("---------------------------------\n");
    printf("MAIOR NÚMERO: %d", maior);
    

return 0;
}
