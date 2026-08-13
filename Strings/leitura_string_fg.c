#include <stdio.h>
#include <stdlib.h>

/* Leitura de string com o 'fgets()'(Melhor opcao e mais segura!!)
*/

int main(){
    char palavras[50];

    printf("Digite o seu nome: ");
    fgets(palavras, 50, stdin);

    /*A funcao e organizada da seguinte forma 
    Fgets("onde eu quero salvar o texto", "tamanho", "stdin(entrada padrao do nosso computador)")
    */

    printf("%s", palavras);
}