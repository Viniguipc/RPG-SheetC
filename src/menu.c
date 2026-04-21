#include "menu.h"
#include "raylib.h"

void menu_incial(int *estado){
	static int opcao_atual = 1;
	char *opcoes[] = {"Fichas", "Opções", "Sair"};
	int num_opcoes = 3;

    //Se pressionar Enter
    if(IsKeyPressed(KEY_ENTER)){
        *estado = opcao_atual;
        opcao_atual = 1;
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

void menu_load(int *estado){
	static int opcao_atual = 1;
	char *opcoes[] = {"Criar Ficha", "Carregar Ficha", "Voltar"};
	int num_opcoes = 3;

    //Se pressionar Enter
    if(IsKeyPressed(KEY_ENTER)){
        switch(opcao_atual){
            case 1:
                *estado = 4;
                break;
            case 2:
                *estado = 5;
                break;
            case 3:
                *estado = 0;
                break;
        }
        opcao_atual = 1;
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

void menu_criar_ficha(int *estado){
	static int opcao_atual = 1;
	char *opcoes[] = {"Tormenta 20", "Dungeons and Dragons 5th Edition", "Fabula Ultima", "3d&t Victory", "Voltar"};
	int num_opcoes = 5;

    //Se pressionar Enter
    if(IsKeyPressed(KEY_ENTER)){
        if(opcao_atual == num_opcoes){
            *estado = 0;
        }
        opcao_atual = 1;
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
