#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Passando uma struct como parametro para um procedimento e tambem criar uma funcao que retorna uma struct

typedef struct{
    int dia, mes, ano;
}DataNas;

typedef struct{
    DataNas nascimento;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void Imprimir_Pessoa(Pessoa p){
    printf("\tNome: %s\n", p.nome);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tIdade: %d\n", p.idade);
    printf("\tData de nascimento: %d/%d/%d", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
}

//funcao que retorna a struct
Pessoa Ler_Pessoa(){
    Pessoa p;

    printf("Digite seu nome: ");
    fgets(p.nome, 101, stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &p.idade);
    printf("Digite M ou F para o seu sexo: ");
    scanf(" %c", &p.sexo);
    printf("Digite sua data de nasimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &p.nascimento.dia, &p.nascimento.mes, &p.nascimento.ano);
    
    return p;   
}

int main(){
    Pessoa pessoa;
    
    pessoa= Ler_Pessoa();
    Imprimir_Pessoa(pessoa);
}

