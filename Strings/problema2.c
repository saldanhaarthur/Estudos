#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

/*Precisamos concatenar duas strings nesse problema
*/

int main(){
    char frase1[max]={"oi,"};
    char frase2[max]={"bom dia!"};

    strcat(frase1, frase2);//a funcao e usada para concatenar a segunda frase colocada na primeira

    printf("%s", frase1);
}