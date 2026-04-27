#include "raylib.h"
#include "t20.h"
#include <string.h>
#include <stdio.h>
#include "menu.h"

// Função responsável por instanciar e preencher uma nova ficha de Tormenta 20
int criar_sheet_t20(){
    static int estado_t20 = 0;
    static T20 new_sheet;

    switch(estado_t20){
        case 0:
            digitar_nome(new_sheet.nome);
            if(IsKeyReleased(KEY_ENTER)){
                estado_t20 = 1;
            }
            break;
        case 1:
            escolher_raca(new_sheet.raca);
            if(IsKeyReleased(KEY_ENTER)){
                estado_t20 = 2;
            }
            break;
        case 2:
            digitar_nome(new_sheet.classe);
            if(IsKeyReleased(KEY_ENTER)){
                estado_t20 = 3;
            }
            break;
        case 3:
            // Inicialização dos atributos padrões de uma nova ficha
            new_sheet.sistema = 1;
            new_sheet.nivel = 1;
            new_sheet.experiencia = 0;
            new_sheet.pv = 10;
            new_sheet.pm = 5;
            new_sheet.mana = 0;
            new_sheet.carisma = 10;
            new_sheet.constituicao = 10;
            new_sheet.destreza = 10;
            new_sheet.forca = 10;
            new_sheet.inteligencia = 10;
            new_sheet.sabedoria = 10;

            // Salva a ficha recém-criada
            save_sheet_t20(&new_sheet);
            estado_t20 = 4;
            break;
        case 4:
            return 6;
            break;
    }

    return 4;
}

// Carrega os dados de uma ficha T20
void load_sheet_t20(T20 *t20){
    FILE *arq;

    arq = fopen(t20->nome, "rb");
    if(arq == NULL){
        DrawText("Erro ao abrir arquivo!", 100, 100, 20, RED);
    }
    fread(t20, sizeof(T20), 1, arq);
    fclose(arq);
}

// Salva os dados de uma ficha T20 (A ser implementado)
void save_sheet_t20(T20 *t20){
    FILE *arq;


    arq = fopen(t20->nome, "wb");
    if(arq == NULL){
        DrawText("Erro ao abrir arquivo!", 100, 100, 20, RED);
    }
    fwrite(t20, sizeof(T20), 1, arq);
    fclose(arq);
}