#include "menu.h"
#include "raylib.h"

void menu_incial(int *estado){
	static int opcao_atual = 0;

    //Movimentação entre as opções
    if (IsKeyPressed(KEY_DOWN)){
        opcao_atual++;
    }
    if (IsKeyPressed(KEY_UP)){
        opcao_atual--;
    }

    //Draw
	BeginDrawing();
		ClearBackground(RAYWHITE);
        DrawText("RPG Sheet C", (GetScreenWidth() - MeasureText("RPG Sheet C", GetScreenHeight() * 0.10)) / 2, (GetScreenHeight() * 0.20), GetScreenHeight() * 0.10, BLACK);

	EndDrawing();
}