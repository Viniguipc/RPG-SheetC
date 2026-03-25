#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menusheetc.h"
#include "personagemsheetc.h"

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
}
