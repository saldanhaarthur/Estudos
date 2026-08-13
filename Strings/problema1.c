#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

/*Nesse problema percisamos contabilizar o tamanho de uma string, vou fazer ela usando prototipos
para conseguirmos fazer ela com e sem a biblioteca de string
*/

//Prototipos
void sem_biblioteca(char frase[]);
void com_biblioteca(char frase[]);

int main(){
    char frase[max];

    printf("Digite uma frase qualquer: ");
    fgets(frase, max, stdin);

    sem_biblioteca(frase);
    com_biblioteca(frase);

}

//funcao sem a biblioteca
void sem_biblioteca(char frase[]){
    int i;
    int tam=0;

    i=0;
    while(frase[i] != '\0'){
        if(frase[i]== '\n'){
            frase[i]='\0';
        }
        i++;
    }

    i=0;
    while(frase[i] != '\0'){
        tam++;
        i++;
    }

    printf("---------Sem biblioteca--------\n");
    printf("O tamanho da sua string e de: %d \n", tam);
}
//funcao com a biblioteca
void com_biblioteca(char frase[]){
    int tam;

    tam = strlen(frase);//strlen conta o tamanho da string

    printf("---------Com biblioteca----------\n");
    printf("O tamanho da sua string e: %d \n", tam);
}
