#include <stdio.h>

int main() {
    // definição do tamanho do tabuleiro e dos navios
    int tabuleiro[10][10];
    int tamanhoNavio = 3;


    // i = linha, j = coluna
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- POSICIONAMENTO DO NAVIO HORIZONTAL ---
    // coordenadas iniciais -- linha 2, coluna 2
    int linhaH = 2, colH = 2;
    
    // verificação de limites simples para o navio horizontal
    if (colH + tamanhoNavio <= 10) {
        for (int j = 0; j < tamanhoNavio; j++) {
            tabuleiro[linhaH][colH + j] = 3; // Preenche a linha horizontalmente
        }
    }

    // --- POSICIONAMENTO DO NAVIO VERTICAL ---
    // coordenadas iniciais: linha 5, coluna 5
    int linhaV = 5, colV = 5;

    // verificação de limites e sobreposição básica
    if (linhaV + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaV + i][colV] == 0) {
                tabuleiro[linhaV + i][colV] = 3;
            }
        }
    }

    // --- EXIBIÇÃO DO TABULEIRO ---
    printf("--- TABULEIRO NAVAL ---\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // mostra o valor da célula seguido de um espaço para melhor legibilidade
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}