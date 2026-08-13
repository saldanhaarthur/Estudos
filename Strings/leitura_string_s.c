#include <stdio.h>
#include <stdlib.h>

/* Leitura de string usando o 'scanf()'
*/

int main(){
    
    char palavras[50];

    printf("Digite seu nome: ");
    scanf("%50[^\n]", palavras);

    printf("%s", palavras);
}
/*Observacoes importantes
Quando usamos o scanf("%s", palavras), conseguimos ler a nossa string somente ate onde damos espaco
e tambem podemos acabar alocando mais letras em nossa string do que e permitida, causando um erro grave
mesmo que copie na tela!!

Portanto utilizamos o scanf("%50[^\n]", palavras) para que %50 faz com que leia somente 50 caracteres
e o nosso [^\n] le ate que a tecla enter seja pressionada
*/

