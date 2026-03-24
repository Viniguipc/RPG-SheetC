#ifndef PERSONAGEMSHEETC_H
#define PERSONAGEMSHEETC_H

typedef struct pj{
	char nome[40];
	int mana;
	int vida;
	int atributos[6];
	int defesa;
}pp;

void imprimir_personagem (pp pj);

void criar_ficha ();

void atualizar_vida(pp* pj);
void atualizar_mana(pp* pj);



#endif
