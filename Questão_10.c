/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int valor, resto, n100, n50, n20, n10, n5, n2, n1;
    
        printf("VALOR A SACAR: ");
        scanf ("%d", &valor);
        
        if (valor >= 100);
        {n100 = valor / 100;}
        
        if (valor % 100 > 0);
        {resto = valor % 100;}
        
        if (resto >= 50);
        {n50 = resto / 50;}
        
        if (resto % 50 > 0);
        {resto = resto % 50;}
        
        if (resto >= 20);
        {n20 = resto / 20;}
        
        if (resto % 20 > 0);
        {resto = resto % 20;}
        
        if (resto >= 10);
        {n10 = resto / 10;}
        
        if (resto % 10 > 0);
        {resto = resto % 10;}
        
        if (resto >= 5);
        {n5 = resto / 5;}
        
        if (resto % 5 > 0);
        {resto = resto % 5;}
        
        if (resto >= 2);
        {n2 = resto / 2;}
        
        if (resto % 2 > 0);
        {resto = resto % 2;}
        
        if (resto >= 1);
        {n1 = resto;}
        
            printf("CÉDULAS DE 100: %d\n", n100);
            printf("CÉDULAS DE 50: %d\n", n50);
            printf("CÉDULAS DE 20: %d\n", n20);
            printf("CÉDULAS DE 10: %d\n", n10);
            printf("CÉDULAS DE 5: %d\n", n5);
            printf("CÉDULAS DE 2: %d\n", n2);
            printf("CÉDULAS DE 1: %d\n", n1);
    return 0;
}
