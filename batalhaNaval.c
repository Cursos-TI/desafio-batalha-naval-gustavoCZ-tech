#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0;
}

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    char letras[TAM] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("   ");
    for (int i = 0; i < TAM; i++)
        printf("%c ", letras[i]);
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void habilidadeCruz(int tabuleiro[TAM][TAM], int x, int y, int alcance) {
    for (int i = -alcance; i <= alcance; i++) {
        if (x + i >= 0 && x + i < TAM)
            tabuleiro[x + i][y] = 1;
        if (y + i >= 0 && y + i < TAM)
            tabuleiro[x][y + i] = 1;
    }
}

void habilidadeConeCima(int tabuleiro[TAM][TAM], int x, int y, int alcance) {
    for (int i = 0; i <= alcance; i++) {
        for (int j = -i; j <= i; j++) {
            int novoX = x - i;
            int novoY = y + j;
            if (novoX >= 0 && novoY >= 0 && novoY < TAM)
                tabuleiro[novoX][novoY] = 1;
        }
    }
}

void habilidadeOctaedro(int tabuleiro[TAM][TAM], int x, int y, int alcance) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (abs(i - x) + abs(j - y) <= alcance)
                tabuleiro[i][j] = 1;
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    int x = 5, y = 5; // centro da habilidade
    int alcance = 3;

    inicializarTabuleiro(tabuleiro);

    // Teste: ative só uma das habilidades por vez
    // habilidadeCruz(tabuleiro, x, y, alcance);
    // habilidadeConeCima(tabuleiro, x, y, alcance);
    habilidadeOctaedro(tabuleiro, x, y, alcance);

    exibirTabuleiro(tabuleiro);

    return 0;
}

