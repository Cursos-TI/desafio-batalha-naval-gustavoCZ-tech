#include <stdio.h>

void inicializartabuleiro(int tabuleiro[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
} 
void posisaonavio(int tabuleiro[10][10]){
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;
    
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;
    
}
void exibirtabuleiro(int tabuleiro[10][10]){

    char letraposicao[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    printf("TABULEIRO DE BATALHA NAVAL \n\n");
    printf("   ");
    for(int i = 0; i < 10; i++){
        printf("%c ", letraposicao[i]);
     }
     printf("\n");
     
     for(int i = 1; i < 10; i++ ){
         printf("%d ", i);
         for(int j = 0; j < 10; j++){
             printf("%d ", tabuleiro[i][j]);
         }
         printf("\n");
     }
 }

int main(){
    
    int tabuleiro[10][10];

    inicializartabuleiro(tabuleiro);
    posisaonavio(tabuleiro);
    exibirtabuleiro(tabuleiro);

    return 0;

}
