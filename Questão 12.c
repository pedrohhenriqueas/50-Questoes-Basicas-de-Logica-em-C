/*
Questao 12:
Fazer um algoritmo que calcule a media aritmetica dos numeros 7, 8 e 9 e a media
nos numeros 4, 5 e 6. Mostre a soma das duas medias e a media das medias.
*/

#include <stdio.h>

int main(){
    
    int n4, n5, n6, n7, n8, n9, media1, media2, soma, media_final;
    
        n7 = 7;
        n8 = 8;
        n9 = 9;
        media1 = (n7 + n8 + n9)/3;
    
            printf("A MEDIA DOS VALORES %d, %d, %d é: %d\n", n7, n8, n9, media1);
            printf("---------------------------------\n");
    
                n4 = 4;
                n5 = 5;
                n6 = 6;
                media2 = (n4 + n5 + n6)/3;
                soma = media1 + media2;
        
            printf("A MEDIA DOS VALORES %d, %d, %d é: %d\n", n4, n5, n6, media2);
            printf("---------------------------------\n");
            printf ("A SOMA DAS MEDIAS %d e %d é: %d\n", media1, media2, soma);
        
                media_final = (media1 + media2)/2;
        
            printf("A MEDIA DAS MEDIAS %d e %d é: %d", media1, media2, media_final);
        
        
        
    return 0;
}
