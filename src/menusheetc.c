#include <stdio.h>
#include "menusheetc.h"

//Função Menu que pergunta se gostaria de abrir uma ficha existente ou criar uma
void menu_load (int* op){
	do{
		printf("\tMENU LOAD\n");
		printf("\n---------");
		printf("\n1 - Novo Personagem\n2 - Personagem Existente\n3 - Sair");
		printf("\n---------\n");
		scanf(" %d", op);
	}while (*op < 1 || *op > 3);
}

//Função Menu que pergunta qual edição gostaria de fazer
void menu_editar (int* op){
	do{
		printf("\tMENU EDITAR\n");
		printf("\n---------");
		printf("\n1 - Atualizar Vida\n2 - Atualizar Mana\n3 - Sair");
		printf("\n---------\n");
		scanf("%d", op);
	}while (*op < 1 || *op > 3);
}

//Função Menu que pergunta se gostaria de editar a ficha ou usar durante a sessão
void menu_inoff (int* op){
	do{
		printf("\tMENU IN\\OFF\n");
		printf("\n---------");
		printf("\n1 - Adicionar Informações do Zero\n2 - Modificar Ficha\n3 - Upar Ficha\n4 - In Game");
		printf("\n---------\n");
		scanf(" %d", op);
	}while (*op < 1 || *op > 4);
}
