#ifndef T20_H
#define T20_H

typedef struct {
    int sistema;
    char *nome;
    char *raca;
    char *classe;
    int nivel;
    int experiencia;
    int pv;
    int pm;
    int mana;
    int carisma;
    int constituicao;
    int destreza;
    int forca;
    int inteligencia;
    int sabedoria;
} T20;

void criar_sheet_t20();
void load_sheet_t20(T20 *t20);
void save_sheet_t20(T20 *t20);

#endif