#include <stdio.h>

#ifndef PERSONAGEMSHEETC_H
#define PERSONAGEMSHEETC_H

//Struct com as informações principais do personagem
typedef struct pj{
	char nome[40];
	int mana[2];
	int vida[2];
	int atributos[6];
	int defesa;
	int nivel;
}pp;

void imprimir_personagem (FILE* sheet);

FILE* criar_ficha ();
FILE* abrir_ficha ();

void atualizar_vida(FILE* arq);
void atualizar_mana(FILE* arq);
void do_zero(FILE* arq);

#endif
