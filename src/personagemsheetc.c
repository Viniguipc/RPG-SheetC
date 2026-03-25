#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "personagemsheetc.h"

//Função para imprimir os dados do personagem - uso antigo, alterar para arquivos
void imprimir_personagem (pp pj){
	printf("\nPersonagem atualizado: \n");
	printf("\nNome: %s", pj.nome);
	printf("\nVida: %d | Mana: %d\n", pj.vida, pj.mana);
}

//Função para criar arquivo.sheet com os dados do personagem vazio
FILE* criar_ficha (){
	pp personagem_vazio;
	char nomearq[50];
	
	printf("\nDigite o nome do personagem: ");
	fgets(nomearq, sizeof(nomearq), stdin);
	
	nomearq[strcspn(nomearq, "\n")] = 0;
	
	strcat(nomearq, ".sheet");
	arq = fopen(nomearq, "wb");
	
	if(arq == NULL){
		printf("\nERRO");
		return NULLL;
	}
	else{
		fwrite(&personagem_vazio, sizeof(pp), 1, arq);
		return arq;
	}
}

FILE* abrir_ficha(){
	char nomearq[50];
	FILE *arq;
	
	printf("\nDigite o nome do arquivo .sheet");
	fgets(nomearq, sizeof(nomearq), stdin);
	
	nomearq[strcspn(nomearq, "\n")] = 0;
	strcat(nomearq, ".sheet");
	arq = fopen(nomearq, "");
	
	if(arq == NULL){
		printf("\nERRO");
		return NULL;
	}
	else{
		return arq;
	}
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

