#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menusheetc.h"
#include "personagemsheetc.h"

int main(){
	pp pj;
	int op;
	
	criar_ficha();
	
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
