#include <stdio.h>
#include "menusheetc.h"

void menu_load (int* op){
	do{
		printf("\tMENU LOAD\n");
		printf("\n---------");
		printf("\n1 - Novo Personagem\n2 - Personagem Existente\n3 - Sair");
		printf("\n---------\n");
		scanf(" %d", op);
	}while (*op < 1 || *op > 3);
}

void menu_editar (int* op){
	do{
		printf("\tMENU EDITAR\n");
		printf("\n---------");
		printf("\n1 - Atualizar Vida\n2 - Atualizar Mana\n3 - Sair");
		printf("\n---------\n");
		scanf("%d", op);
	}while (*op < 1 || *op > 3);
}
