#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int tamanhoNavio = 3;

    // --- INICIALIZAÇÃO DO TABULEIRO ---
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- POSICIONAMENTO DO NAVIO HORIZONTAL ---
    int linhaH = 1, colH = 1;
    if (colH + tamanhoNavio <= 10) {
        for (int j = 0; j < tamanhoNavio; j++) {
            tabuleiro[linhaH][colH + j] = 3;
        }
    }

    // --- POSICIONAMENTO DO NAVIO VERTICAL ---
    int linhaV = 1, colV = 8;
    if (linhaV + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaV + i][colV] == 0) {
                tabuleiro[linhaV + i][colV] = 3;
            }
        }
    }
    // --- POSICIONAMENTO DO NAVIO DIAGONAL 1 (meio do tabuleiro) ---
   int linhaD1 = 5, colD1 = 4;
    if (linhaD1 + tamanhoNavio <= 10 && colD1 + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaD1 + i][colD1 + i] = 3;
        }
    }

    // --- POSICIONAMENTO DO NAVIO DIAGONAL 2 (CANTO INFERIOR) ---
    int linhaD2 = 7, colD2 = 2;
    if (linhaD2 + tamanhoNavio <= 10 && colD2 - tamanhoNavio >= -1) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaD2 + i][colD2 - i] = 3;
        }
    }

    // --- EXIBIÇÃO DO TABULEIRO ---
    printf("--- TABULEIRO AVENTUREIRO ---\n\n");
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}