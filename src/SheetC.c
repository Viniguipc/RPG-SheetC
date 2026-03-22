#include <stdio.h>

typedef struct pj{
    char nome[40];
    int mana;
    int vida;
}pp;

void menu (int* op){
    do{
        printf("\tMENU\n");
        printf("\n---------");
        printf("\n1 - Atualizar Vida\n2 - Atualizar Mana\n3 - Sair");
        printf("\n---------\n");
        scanf("%d", op);
    }while (*op < 1 || *op > 3);
}

void atualizar_vida(pp* pj){
    int op;
    
    do{
        printf("\n1 - Aumentar\n2 - Diminuir\n");
        scanf(" %d", &op);
    }while (op < 1 || op > 2);
    
    switch(op){
        case 1:
            break;
        case 2:
            break;    
    }
}

void atualizar_mana(){
    
}

int main(){
    pp pj;
    int i, op;
    
    pj.vida = 50;
    pj.mana = 45;
    
    do{
        menu(&op);
        
        switch(op){
            case 1:
                atualizar_vida(&pj);
                break;
            case 2:
                atualizar_mana();
                break;
        }
    }while (op != 3);
    
}