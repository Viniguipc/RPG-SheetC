#include "menu.h"
#include "raylib.h"

// Função que renderiza e controla a lógica do Menu Inicial
void menu_incial(int *estado){
	static int opcao_atual = 1; // Guarda a opção selecionada atualmente (mantida entre frames)
	char *opcoes[] = {"Fichas", "Opções", "Sair"}; // Texto das opções do menu
	int num_opcoes = 3; // Quantidade total de opções disponíveis

    // Se pressionar Enter, altera o estado do jogo para a opção selecionada
    if(IsKeyPressed(KEY_ENTER)){
        *estado = opcao_atual; // Transição de estado (1: Fichas, 2: Opções, 3: Sair)
        opcao_atual = 1;       // Reseta a opção para a próxima vez que entrar no menu
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

// Função que renderiza e controla a lógica do submenu de Fichas (Criar/Carregar)
void menu_load(int *estado){
	static int opcao_atual = 1; // Guarda a opção selecionada atualmente
	char *opcoes[] = {"Criar Ficha", "Carregar Ficha", "Voltar"};
	int num_opcoes = 3;

    // Se pressionar Enter, executa a ação correspondente
    if(IsKeyPressed(KEY_ENTER)){
        switch(opcao_atual){
            case 1:
                *estado = 4; // Muda para o estado de Criação de Ficha
                break;
            case 2:
                *estado = 5; // Muda para o estado de Carregamento de Ficha
                break;
            case 3:
                *estado = 0; // Retorna ao Menu Inicial
                break;
        }
        opcao_atual = 1; // Reseta a opção selecionada
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

// Função que renderiza e controla a tela de seleção do sistema de RPG
void menu_criar_ficha(int *estado){
	static int opcao_atual = 1; // Guarda o sistema de RPG selecionado
	char *opcoes[] = {"Tormenta 20", "Dungeons and Dragons 5th Edition", "Fabula Ultima", "3d&t Victory", "Voltar"};
	int num_opcoes = 5;

    // Se pressionar Enter, tenta criar a ficha no sistema escolhido
    if(IsKeyPressed(KEY_ENTER)){
        switch(opcao_atual){
            case 1:
                criar_sheet_t20(); // Chama a função que inicia a criação para T20
                break;
            case 2:
                *estado = 5; // (WIP) Mudança temporária
                break;
            case 3:
                *estado = 0; // (WIP) Retorna ao menu
                break;
            case 4:
                *estado = 0; // (WIP) Retorna ao menu
                break;
            case 5:
                *estado = 0; // Retorna ao Menu Inicial
                break;
        }
        opcao_atual = 1; // Reseta a seleção
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

// Função para capturar e exibir a digitação de texto do usuário (ex: digitar o nome do personagem)
void nome(char *nome){
    // Variáveis estáticas para não perder o estado do texto digitado entre as atualizações de tela
    static char nome_temp[50], digito;
    static int count = 0; // Controla a quantidade de caracteres já digitados

	// Permite digitar no máximo 50 caracteres
	if(count < 50){
        digito = GetCharPressed(); // Pega a tecla pressionada neste frame
        if(digito != 0){ // Se for uma tecla válida
            nome_temp[count] = digito; // Adiciona o caractere na string
            count++; // Incrementa a quantidade de caracteres
        }
    }

    // Se pressionar Enter, finaliza a digitação e passa o texto para o ponteiro de destino
    if(IsKeyPressed(KEY_ENTER)){
        // ATENÇÃO: Aqui há um possível erro. Atribuir o ponteiro de uma variável estática para *nome 
        // ou desreferenciar char** como char* pode causar problemas. O ideal é usar strcpy.
        *nome = nome_temp; 
        count = 0; // Reseta o contador para uma próxima digitação
        nome_temp[0] = '\0'; // Limpa a string temporária
    }

    // Desenha na tela o texto que está sendo digitado
    DrawText(nome_temp, (GetScreenWidth() - MeasureText(nome_temp, GetScreenHeight() * 0.05)) / 2, (GetScreenHeight() * 0.50), GetScreenHeight() * 0.05, BLACK);
}
