#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//criando uma struct dentro de uma strcut

typedef struct{
    int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas nascimento;
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
    printf("Digite sua data de nasimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);

    printf("Nome: %s\n", pessoa.nome);
    printf("Sexo: %c\n", pessoa.sexo);
    printf("Idade: %d\n", pessoa.idade);
    printf("Data de nascimento: %d/%d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
}

