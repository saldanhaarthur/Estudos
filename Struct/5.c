#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criando um vetor de struct

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
    printf("\n\n");
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
    printf("Digite sua data de nasimento no formato dd mm aaaa: \n");
    scanf("%d%d%d", &p.nascimento.dia, &p.nascimento.mes, &p.nascimento.ano);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);//para limpar o buffer e nao dar errado na hora de voltar novamente
    
    return p;   
}

int main(){
    Pessoa pessoas[3];
    int i;
    
    for (i = 0; i<3; i++){
        pessoas[i]= Ler_Pessoa();
    }
    for(i = 0; i<3; i++){
        Imprimir_Pessoa(pessoas[i]);
    }

    return 0;
}

