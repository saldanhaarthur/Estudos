#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//criando uma struct com os dados lidos do teclado

typedef struct{
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main(){
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 101, stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite M ou F para o seu sexo: ");
    scanf(" %c", &pessoa.sexo);

    printf("Nome: %s\n", pessoa.nome);
    printf("Sexo: %c\n", pessoa.sexo);
    printf("Idade: %d\n", pessoa.idade);
}

