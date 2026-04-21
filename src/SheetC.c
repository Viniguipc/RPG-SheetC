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
	
	while (!WindowShouldClose()){
		switch(estado_atual){

			case 0:
				menu_incial(&estado_atual);
				break;
			case 1:
				break;
			case 2:
				break;
			default:
				break;
		}
	}

	CloseWindow();

	return 0;
}
