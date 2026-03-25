#include <stdio.h>

#ifndef PERSONAGEMSHEETC_H
#define PERSONAGEMSHEETC_H

//Struct com as informações principais do personagem
typedef struct pj{
	char nome[40];
	int mana;
	int vida;
	int atributos[6];
	int defesa;
	int nivel;
}pp;

void imprimir_personagem (pp pj);

FILE* criar_ficha ();
FILE* abrir_ficha ();

void atualizar_vida(pp* pj);
void atualizar_mana(pp* pj);



#endif
