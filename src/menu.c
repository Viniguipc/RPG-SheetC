#include "menu.h"
#include "raylib.h"

void menu_incial(int *estado){
	static int opcao_atual = 1;
	char *opcoes[] = {"Fichas", "Opções", "Sair"};
	int num_opcoes = 3;

    //Se pressionar Enter
    if(IsKeyPressed(KEY_ENTER)){
        *estado = opcao_atual;
    }

    //Movimentação entre as opções
    if (IsKeyPressed(KEY_DOWN)){
        if(opcao_atual == num_opcoes){
            opcao_atual = 1;
        }
        else{
            opcao_atual++;
        }
    }
    if (IsKeyPressed(KEY_UP)){
        if(opcao_atual == 1){
            opcao_atual = num_opcoes;
        }
        else{
            opcao_atual--;
        }
    }

    //Draw
	BeginDrawing();
		ClearBackground(RAYWHITE);
        DrawText("RPG Sheet C", (GetScreenWidth() - MeasureText("RPG Sheet C", GetScreenHeight() * 0.10)) / 2, (GetScreenHeight() * 0.20), GetScreenHeight() * 0.10, BLACK);

        for(int i = 0; i < num_opcoes; i++){
			if(i + 1 != opcao_atual){
				DrawText(opcoes[i], (GetScreenWidth() - MeasureText(opcoes[i], GetScreenHeight() * 0.05)) / 2, (GetScreenHeight() * 0.50) + (i * (GetScreenHeight() * 0.05)), GetScreenHeight() * 0.05, BLACK);
			}
            else{
                DrawText(opcoes[i], (GetScreenWidth() - MeasureText(opcoes[i], GetScreenHeight() * 0.05)) / 2, (GetScreenHeight() * 0.50) + (i * (GetScreenHeight() * 0.05)), GetScreenHeight() * 0.05, RED);
            }
        }
	EndDrawing();
}