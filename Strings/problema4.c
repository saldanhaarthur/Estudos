#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

/* Precisamos copiar uma string para outra
*/

int main(){
    char frase1[max]={"banana"};
    char frase2[max]={"abacate"};

    printf("Antes de copiar:\n frase 1: %s\n frase 2: %s\n", frase1, frase2);

    strcpy(frase2, frase1);//copia a segunda string e coloca na primeira
    
    printf("Depos de copiar:\n frase 1: %s\n frase 2: %s\n", frase1, frase2);


}


