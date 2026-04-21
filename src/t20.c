#include "raylib.h"
#include "t20.h"

void criar_sheet_t20(){
    T20 new_sheet;

	nome(&new_sheet.nome);
    
    new_sheet.sistema = 1;
    new_sheet.raca = "";
    new_sheet.classe = "";
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

    save_sheet_t20(&new_sheet);
}
void load_sheet_t20(T20 *t20){

}
void save_sheet_t20(T20 *t20){
    
}