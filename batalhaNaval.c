#include <stdio.h>

void inicializartabuleiro(int tabuleiro[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

} 
void posisaonavio(int tabuleiro[10][10]){
    int i, j;

    //navil horizontal
    for(int i = 1; i < 4; i++){
        tabuleiro[5][i] = 3;
    }

    //navil vertical
    for(i = 1;i < 4; i++){
        tabuleiro[i][5] = 3; 
    }
    for(i = 0; i < 3; i++ ){
            tabuleiro[i][i] = 3;
        }
    for(i = 0; i < 3; i++){
        tabuleiro[i][9 - i] = 3;
    }
}

void exibirtabuleiro(int tabuleiro[10][10]){

    char letraposicao[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    printf("TABULEIRO DE BATALHA NAVAL \n\n");
    printf("  ");
    for(int i = 0; i < 10; i++){
        printf("%c ", letraposicao[i]);
     }
     printf("\n");
     
     for(int i = 0; i < 10; i++ ){
         printf("%d ", i);
         for(int j = 0; j < 10; j++){
             printf("%d ", tabuleiro[i][j]);
         }
         printf("\n");
     }
    printf("\n");
}

int main(){
    
    int tabuleiro[10][10];

    inicializartabuleiro(tabuleiro);
    posisaonavio(tabuleiro);
    exibirtabuleiro(tabuleiro);

    return 0;

}
