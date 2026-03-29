#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menusheetc.h" //Biblioteca com os menus
#include "personagemsheetc.h" //Biblioteca com as funções para abrir e modificar a ficha do personagem, a struct tbm esta aq

int main(){
	int op;
	FILE *arq;
	
	menu_load(&op);
	
	if (op == 1){
		arq = criar_ficha();
	}
	else{
		arq = abrir_ficha();
	}
	
	if (arq == NULL){
		printf("\nERRO");
	}
	else{
		menu_inoff (&op);
		switch (op){
			case 1:
				imprimir_personagem(arq);
				break;
			case 2:
				break;
			case 3:
				break;
		}
		
		fclose(arq);
	}
}
