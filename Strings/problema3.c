#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

/*Precisamos comparar duas strings
*/
int main(){
    char frase1[max]={"abelha"};
    char frase2[max]={"banana"};
    char frase3[max]={"abelha"};

    printf("%d \n \n", strcmp(frase1, frase2));
    printf("%d \n \n", strcmp(frase1, frase3));
    printf("%d \n \n", strcmp(frase2, frase1));
}

/*
    0  -> as strings sao iguais
    -1 -> a str1 e menor que a str2
    1  -> a str1 e maior que a str2
*/