/*
Questao 22:
 Escreva um algoritmo para ler 2 valores inteiros e uma das seguintes operacoes a
serem executadas: 1. Adicao, 2. Subtracao, 3. Divisao e 4. Multiplicacao. Calcular e mostrar o
resultado da operacao.
*/

#include <stdio.h>

int  main ()
{
      int v1, v2, soma, multiplicacao, divisao, subtracao, funcao;
        
          printf ("Digite o primeiro valor: ");
          scanf ("%d", &v1);
          printf ("Digite o segundo valor: ");
          scanf ("%d", &v2);
          printf ("--------------------------------------------------\n");
          printf ("Digite o numero da funçao que você deseja realizar\n");
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
              printf ("Multiplicacao: %d\n", multiplicacao);
            }
          if (funcao == 3)
            {
              printf ("Subtracao: %d\n", subtracao);
            }
          if (funcao == 4)
            {
              printf ("Divisao: %d\n", divisao);
            }

  return 0;
}
