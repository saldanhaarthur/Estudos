#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criando novos tipos de dados em C com typedef struct

typedef struct{
    int idade;
    char sexo;
    char nome[100];
}Pessoa; //nome do tipo de dado criado

int main(){
    Pessoa pessoa1; //tipo de dado criado e o nome da variavel que vamos colocar os dados

    //fazendo a atribuicao dos valores a cada dado
    pessoa1.idade = 19;
    pessoa1.sexo = 'M';
    strcpy(pessoa1.nome, "Arthur");

    //mostrando na tela as informacoes preenchidas
    printf("Nome: %s\n", pessoa1.nome);
    printf("Sexo: %c\n", pessoa1.sexo);
    printf("Idade: %d\n", pessoa1.idade);

}