#include <stdio.h>

int main()
{
    int c = 16;
    
    while(c < 30)
    {
        if(c%2==0)
        {
            printf("Seu número %d é par e entre 14 e 30\n", c);
        }
         c = c + 1;
    }
    return 0;
}