#ifndef T20_H
#define T20_H

// Estrutura que representa a ficha de um personagem no sistema Tormenta 20
typedef struct {
    int sistema;          // Identificador do sistema
    char nome[30];        // Nome do personagem
    char raca[20];        // Raça do personagem
    char classe[20];      // Classe do personagem
    int nivel;            // Nível atual do personagem
    int experiencia;      // Pontos de experiência (XP)
    int pv;               // Pontos de Vida
    int pm;               // Pontos de Mana
    int mana;             // Mana atual
    // Atributos base do personagem
    int carisma;
    int constituicao;
    int destreza;
    int forca;
    int inteligencia;
    int sabedoria;
} T20;

// Função para criar uma nova ficha de T20 interativamente
int criar_sheet_t20();
// Função para carregar uma ficha de T20 do disco
void load_sheet_t20(T20 *t20);
// Função para salvar a ficha de T20 no disco
void save_sheet_t20(T20 *t20);

#endif