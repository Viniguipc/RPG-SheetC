#include <stdio.h>
#include <stdlib.h>
#include "personagemsheetc.h"

void imprimir_personagem (pp pj){
	printf("\nPersonagem atualizado: \n");
	printf("\nNome: %s", pj.nome);
	printf("\nVida: %d | Mana: %d\n", pj.vida, pj.mana);
}

//Função para criar arquivo.sheet com os dados do personagem vazio
void criar_ficha (){
	pp personagem_vazio;
	FILE *arq;
	
	
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

