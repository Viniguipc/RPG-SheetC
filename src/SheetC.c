#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "raylib.h"
#include "menu.h"

int main(){
	
	//variaveis
	int estado_atual;

	//inizializa a window
	InitWindow(GetScreenWidth(), GetScreenHeight(), "RPG Sheet C");
	SetTargetFPS(60);
	
	while (!WindowShouldClose() && estado_atual != 3){
		switch(estado_atual){

			case 0:
				menu_incial(&estado_atual);
				break;
			case 1:
				menu_load(&estado_atual);
				break;
			case 2:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
		}
	}

	CloseWindow();

	return 0;
}
