#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "raylib.h"
#include "menu.h"

// Função principal do programa
int main(){
	
	// Variável que controla a máquina de estados do programa
	// 0: Menu Inicial, 1: Submenu de Fichas/Load, 3: Sair, 4: Criar Ficha, etc.
	int estado_atual = 0; // Inicializando com 0 para iniciar no Menu Inicial

	// Inicializa a janela da aplicação usando a resolução do monitor
	InitWindow(GetScreenWidth(), GetScreenHeight(), "RPG Sheet C");
	SetTargetFPS(60); // Define a taxa de atualização para 60 frames por segundo
	
	// Loop principal: executa até o usuário fechar a janela ou o estado atual ser 3 (Sair)
	while (!WindowShouldClose() && estado_atual != 3){
		switch(estado_atual){

			case 0: // Exibe o Menu Inicial
				menu_incial(&estado_atual);
				break;
			case 1: // Exibe o Menu de Carregar/Criar Ficha
				menu_load(&estado_atual);
				break;
			case 2: // Estado reservado (ex: Opções)
				break;
			case 4: // Exibe a tela de escolha de sistema para Criar Ficha
				menu_criar_ficha(&estado_atual);
				break;
			case 5: // Estado reservado para Carregar Ficha existente
				break;
			case 6: // Estado não implementado
				break;
		}
	}

	// Fecha a janela e libera os recursos gráficos (Raylib)
	CloseWindow();

	return 0;
}
