#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menusheetc.h"

typedef struct pj{
	char nome[40];
	int mana;
	int vida;
}pp;

void imprimir_personagem (pp pj){
	printf("\nPersonagem atualizado: \n");
	printf("\nNome: %s", pj.nome);
	printf("\nVida: %d | Mana: %d\n", pj.vida, pj.mana);
}

void atualizar_vida(pp* pj){
	int op, vida;
	
	do{
		printf("\n1 - Aumentar\n2 - Diminuir\n");
		scanf(" %d", &op);
	}while (op < 1 || op > 2);
	
	switch(op){
		case 1:
			do{
				printf("\nDigite a vida recuperada: ");
				scanf(" %d", &vida);
			}while (vida < 0);
			
			pj->vida = pj->vida + vida;
			break;
		case 2:
			do{
				printf("\nDigite a vida perdida: ");
				scanf(" %d", &vida);
				
				pj->vida = pj->vida - vida;
			}while (vida < 0);
			break;    
	}
}

void atualizar_mana(pp* pj){
	int op, mana;
	
	do{
		printf("\n1 - Aumentar\n2 - Diminuir\n");
		scanf(" %d", &op);
	}while (op < 1 || op > 2);
	
	switch(op){
		case 1:
			do{
				printf("\nDigite a mana recuperada: ");
				scanf(" %d", &mana);
			}while (mana < 0);
			
			pj->mana = pj->mana + mana;
			break;
		case 2:
			do{
				printf("\nDigite a vida perdida: ");
				scanf(" %d", &mana);
				
				pj->mana = pj->mana - mana;
			}while (mana < 0);
			break;    
	}
}

int main(){
	pp pj;
	int op;
	
	strcpy(pj.nome, "Drugo"); 
	pj.vida = 50;
	pj.mana = 45;
	
	menu_load(&op);
	
	do{
		system("clear");
		imprimir_personagem(pj);
		
		menu_editar(&op);
		
		switch(op){
			case 1:
				atualizar_vida(&pj);
				break;
			case 2:
				atualizar_mana(&pj);
				break;
		}
	}while (op != 3);
}
