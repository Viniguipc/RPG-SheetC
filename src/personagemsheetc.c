#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "personagemsheetc.h"

//Função para imprimir os dados do personagem
void imprimir_personagem (FILE* sheet){
	pp ficha;
	
	fread(&ficha, sizeof(struct pj), 1, sheet);
	
	printf("\nPersonagem atualizado: \n");
	printf("\nNome: %s, NV %d", ficha.nome, ficha.nivel);
	printf("\nVida: %d / %d | Mana: %d / %d\n", ficha.vida[0], ficha.vida[1], ficha.mana[0], ficha.mana[1]);
	printf("\nDefesa: %d", ficha.defesa);
	printf("\nFor %d, Des %d, Con %d, Int %d, Sab %d, Car %d\n", ficha.atributos[0], ficha.atributos[1], ficha.atributos[2], ficha.atributos[3], ficha.atributos[4], ficha.atributos[5]);
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
		personagem_vazio.vida[0] = 0;
		personagem_vazio.vida[1] = 0;
		personagem_vazio.nivel = 0;
		personagem_vazio.mana[0] = 0;
		personagem_vazio.mana[1] = 0;
		personagem_vazio.defesa = 0;
		
		for(i = 0; i < 6; i++){
			personagem_vazio.atributos[i] = 0;
		}
		fwrite(&personagem_vazio, sizeof(struct pj), 1, arq);
				
		fclose(arq);
		arq = fopen(nomearq, "rb+");
		
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
	arq = fopen(nomearq, "rb+");
	
	if(arq == NULL){
		printf("\nERRO");
		return arq;
	}
	else{
		return arq;
	}
}

//Função para atualizar vida - uso antigo, atualizar para arquivo
void atualizar_vida(FILE* arq){
	pp pj;
	int op, vida;
	
	rewind(arq);
	fread(&pj, sizeof(struct pj), 1, arq);
	
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
			
			pj.vida[0] = pj.vida[0] + vida;
			break;
		case 2:
			do{
				printf("\nDigite a vida perdida: ");
				scanf(" %d", &vida);
			}while (vida < 0);
			
			pj.vida[0] = pj.vida[0] - vida;
			break;    
	}
	
	rewind(arq);
	fwrite(&pj, sizeof(struct pj), 1, arq);
	rewind(arq);
}

//Função para atualizar mana - uso antigo, atualizar para arquivo
void atualizar_mana(FILE* arq){
	pp pj;
	int op, mana;
	
	rewind(arq);
	fread(&pj, sizeof(struct pj), 1, arq);
	
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
			
			pj.mana[0] = pj.mana[0] + mana;
			break;
		case 2:
			do{
				printf("\nDigite a mana perdida: ");
				scanf(" %d", &mana);
			}while (mana < 0);
			
			pj.mana[0] = pj.mana[0] - mana;
			break;    
	}
	
	rewind(arq);
	fwrite(&pj, sizeof(struct pj), 1, arq);
	rewind(arq);
}

void do_zero(FILE* arq){
	int op;
	
	do{
		menu_zero(&op);
		
		switch (op){
			case 1:
				atualizar_vida(arq);
				break;
			case 2:
				atualizar_mana(arq);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;		
		}
	}while (op != 6);
}

