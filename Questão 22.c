#include <stdio.h>

int  main ()
{
      int v1, v2, soma, multiplicacao, divisao, subtracao, funcao;
        
          printf ("Digite o primeiro valor: ");
          scanf ("%d", &v1);
          printf ("Digite o segundo valor: ");
          scanf ("%d", &v2);
          printf ("--------------------------------------------------\n");
          printf ("Digite o número da funç que você deseja realizar\n");
          printf ("--------------------------------------------------\n");
          printf ("1- Para somar\n");
          printf ("2- Para multiplicar\n");
          printf ("3- Para subtrair \n");
          printf ("4- Para divitir \n");
          printf ("Função desejada:");
          scanf ("%d", &funcao);
        
              (soma = v1 + v2);
              (subtracao = v1 - v2);
              (multiplicacao = v1 * v2);
              (divisao = v1 / v2);
        
        
          if (funcao == 1)
            {
              printf ("Soma: %d\n", soma);
            }
          if (funcao == 2)
            {
              printf ("Multiplicação: %d\n", multiplicacao);
            }
          if (funcao == 3)
            {
              printf ("Subtração: %d\n", subtracao);
            }
          if (funcao == 4)
            {
              printf ("Divisão: %d\n", divisao);
            }

  return 0;
}
