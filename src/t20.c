#include "raylib.h"
#include "t20.h"

// Função responsável por instanciar e preencher uma nova ficha de Tormenta 20
void criar_sheet_t20(){
    T20 new_sheet;

	// Chama a função de input de texto para definir o nome do personagem
	nome(&new_sheet.nome);
    
    // Inicialização dos atributos padrões de uma nova ficha
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

    // Salva a ficha recém-criada
    save_sheet_t20(&new_sheet);
}

// Carrega os dados de uma ficha T20 (A ser implementado)
void load_sheet_t20(T20 *t20){

}

// Salva os dados de uma ficha T20 (A ser implementado)
void save_sheet_t20(T20 *t20){
    
}