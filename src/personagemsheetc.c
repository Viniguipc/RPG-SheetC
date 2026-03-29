#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "personagemsheetc.h"

//Função para imprimir os dados do personagem - uso antigo, alterar para arquivos
void imprimir_personagem (FILE* sheet){
	pp ficha;
	
	fread(&ficha, sizeof(struct pj), 1, sheet);
	
	printf("\nPersonagem atualizado: \n");
	printf("\nNome: %s", ficha.nome);
	printf("\nVida: %d | Mana: %d\n", ficha.vida, ficha.mana);
}

//Função para criar arquivo.sheet com os dados do personagem vazio
FILE* criar_ficha (){
	pp personagem_vazio;
	char nomearq[50];
	FILE* arq;
	int i;
	
	getchar();
	
	printf("\nDigite o nome do personagem: ");
	fgets(nomearq, sizeof(nomearq), stdin);
	
	nomearq[strcspn(nomearq, "\n")] = 0;
	
	strcpy(personagem_vazio.nome, nomearq);
	
	strcat(nomearq, ".sheet");
	arq = fopen(nomearq, "wb");
	
	if(arq == NULL){
		printf("\nERRO");
		return NULL;
	}
	else{
		personagem_vazio.vida = 0;
		personagem_vazio.nivel = 0;
		personagem_vazio.mana = 0;
		personagem_vazio.defesa = 0;
		
		for(i = 0; i < 6; i++){
			personagem_vazio.atributos[i] = 0;
		}
		fwrite(&personagem_vazio, sizeof(struct pj), 1, arq);
				
		fclose(arq);
		arq = fopen(nomearq, "rb");
		
		if(arq == NULL){
			printf("\nERRO");
		}
		else{
			return arq;	
		}
	}
}

//Função para abrir ficha existente - Adicionar um modo de ver os arquivos na pasta para poder abrir e evitar erro de digitação
FILE* abrir_ficha(){
	char nomearq[50];
	FILE *arq;
	
	printf("\nDigite o nome do arquivo .sheet: ");
	getchar();
	fgets(nomearq, sizeof(nomearq), stdin);
	
	nomearq[strcspn(nomearq, "\n")] = 0;
	strcat(nomearq, ".sheet");
	arq = fopen(nomearq, "rb");
	
	if(arq == NULL){
		printf("\nERRO");
		return arq;
	}
	else{
		return arq;
	}
}

//Função para atualizar vida - uso antigo, atualizar para arquivo
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

//Função para atualizar mana - uso antigo, atualizar para arquivo
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

