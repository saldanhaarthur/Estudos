#include <stdio.h>
#include <stdlib.h>

/*
Projeto: Sistema da Guilda de Aventureiros (RPG)
Objetivo: Guardar as informacoes pessoais de cada aventureiro e seus atributos
Dia: 15/08/2026
Autor: Arthur Rocha Saldanha
*/

//structs

typedef struct{
    int agilidade;
    int forca;
    int vitalidade;
    int inteligencia;
}Tatributos;

typedef struct{
    Tatributos habilidades;
    int nivel;
    char nome[100];
    char classe[50];
    
}Taventureiros;

