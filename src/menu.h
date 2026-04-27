#ifndef MENU_H
#define MENU_H

// Exibe o menu principal do aplicativo e altera o estado do jogo
void menu_inicial(int *estado);
// Exibe o menu para carregar ou criar fichas
void menu_load(int *estado);
// Exibe o menu de seleção de sistema de RPG para criar a ficha
void menu_criar_ficha(int *estado);
// Função para entrada de texto (nome) do usuário interativamente
void digitar_nome(char *name);
// Função para escolha de raça do usuário interativamente
void escolher_raca(char *raca);

#endif